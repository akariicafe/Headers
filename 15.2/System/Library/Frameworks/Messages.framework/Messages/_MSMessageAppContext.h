@class UIViewController, NSString, NSMapTable, MSConversation;
@protocol _MSMessageComposeHostImplProtocol, _MSMessageComposeExtensionImplProtocol;

@interface _MSMessageAppContext : NSObject <_MSMessageComposeExtensionImplProtocol> {
    id<_MSMessageComposeExtensionImplProtocol> _context;
    id<_MSMessageComposeExtensionImplProtocol> _keepAliveContext;
    NSMapTable *_conversationsByIdentifier;
}

@property (readonly, nonatomic) MSConversation *activeConversation;
@property (retain, nonatomic) id<_MSMessageComposeHostImplProtocol> hostContext;
@property (nonatomic) unsigned long long presentationStyle;
@property (nonatomic) unsigned long long presentationContext;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, weak, nonatomic) UIViewController *stickerViewController;
@property (retain, nonatomic) id<_MSMessageComposeExtensionImplProtocol> containingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeExtensionContext;

- (void)_resignActive;
- (void)stageAssetArchive:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)dismissAndPresentPhotosApp;
- (void)dismiss;
- (void)beginDisablingUserInteraction;
- (void)endDisablingUserInteraction;
- (void).cxx_destruct;
- (void)requestPresentationStyleExpanded:(BOOL)a0;
- (id)initWithAppContext:(id)a0;
- (void)requestPresentationStyle:(unsigned long long)a0;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)requestResize;
- (void)contentDidLoad;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 destructiveButtonTitle:(id)a3 completion:(id /* block */)a4;
- (void)_didRemoveAssetArchiveWithIdentifier:(id)a0;
- (void)_prepareForPresentationWithCompletionHandler:(id /* block */)a0;
- (void)_volumeButtonPressed:(BOOL)a0;
- (void)stageAppItem:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)stageMediaItem:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)stageRichLink:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)removeAssetArchiveWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)startDragMediaItem:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fence:(id)a2 completionHandler:(id /* block */)a3;
- (void)dragMediaItemMoved:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(double)a2 scale:(double)a3 completionHandler:(id /* block */)a4;
- (void)dragMediaItemCanceled;
- (id)updatedConversationForConversationState:(id)a0;
- (void)_keepContextAlive;
- (void)_releaseKeepAliveContext;
- (void)_becomeActiveWithConversationState:(id)a0 presentationState:(id)a1;
- (void)_canSendMessage:(id)a0 conversationState:(id)a1 associatedText:(id)a2 completion:(id /* block */)a3;
- (void)_requestContentSizeThatFits:(id)a0 presentationStyle:(id)a1 completionHandler:(id /* block */)a2;
- (void)_conversationDidChangeWithConversationState:(id)a0;
- (void)_presentationWillChangeToPresentationState:(id)a0;
- (void)_presentationDidChangeToPresentationState:(id)a0;
- (void)_didReceiveMessage:(id)a0 conversationState:(id)a1;
- (void)_didStartSendingMessage:(id)a0 conversationState:(id)a1;
- (void)_didCancelSendingMessage:(id)a0 conversationState:(id)a1;
- (void)_requestSnapshotWithCompletion:(id /* block */)a0;
- (void)_hostDidBeginDeferredTeardown;
- (void)_handleTextInputPayload:(id)a0 withPayloadID:(id)a1 completion:(id /* block */)a2;

@end
