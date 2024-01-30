@class MSConversation, UIViewController, NSString;
@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;

@interface _MSMessageAppExtensionContext : NSExtensionContext <_MSMessageComposeExtensionImplProtocol>

@property (retain, nonatomic) MSConversation *activeConversation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrameOfHostView;
@property (readonly, nonatomic) struct __CFRunLoopObserver { } *principalObjectCreationObserver;
@property (nonatomic) unsigned long long presentationStyle;
@property (nonatomic) unsigned long long presentationContext;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, weak, nonatomic) UIViewController *stickerViewController;
@property (retain, nonatomic) id<_MSMessageComposeExtensionImplProtocol> containingContext;
@property (retain, nonatomic) id<_MSMessageComposeHostImplProtocol> hostContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resignActive;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestPresentationStyleExpanded:(BOOL)a0;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)dismissToKeyboard:(BOOL)a0;
- (void)dismissAndPresentPhotosApp;
- (void)beginDisablingUserInteraction;
- (void)endDisablingUserInteraction;
- (void)stageAssetArchive:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)dismiss;
- (id)remoteProxy;
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
- (void)_installPrincipalObjectObserver;
- (void)_uninstallPrincipalObjectObserverIfNeeded;
- (void)_handlePrincipalObjectCreated;

@end
