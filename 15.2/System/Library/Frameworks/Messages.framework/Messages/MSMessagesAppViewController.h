@class MSConversation, NSString;
@protocol _MSMessageComposeExtensionImplProtocol;

@interface MSMessagesAppViewController : UIViewController <MSRootViewControllerProtocol, MSConversationDelegate, MSMessagesAppTranscriptPresentation>

@property (nonatomic) BOOL isReadyForDisplay;
@property (nonatomic) BOOL viewHasAppeared;
@property (retain, nonatomic) id<_MSMessageComposeExtensionImplProtocol> appContext;
@property (retain, nonatomic) MSConversation *activeConversation;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } _balloonMaskEdgeInsets;
@property (readonly, nonatomic) unsigned long long presentationStyle;
@property (readonly, nonatomic) unsigned long long presentationContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrameBeforeAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismiss;
- (struct CGSize { double x0; double x1; })contentSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)willSelectMessage:(id)a0 conversation:(id)a1;
- (void)didSelectMessage:(id)a0 conversation:(id)a1;
- (void)requestPresentationStyle:(unsigned long long)a0;
- (BOOL)displaysAfterAppearance;
- (void)setReadyForDisplay;
- (void)requestResize;
- (void)contentDidLoad;
- (void)_conversation:(id)a0 willSelectMessage:(id)a1;
- (void)_conversation:(id)a0 didSelectMessage:(id)a1;
- (void)willBecomeActiveWithConversation:(id)a0;
- (void)didBecomeActiveWithConversation:(id)a0;
- (void)willResignActiveWithConversation:(id)a0;
- (void)didResignActiveWithConversation:(id)a0;
- (void)updateSnapshotWithCompletionBlock:(id /* block */)a0;
- (void)_validateMessageForSending:(id)a0 conversation:(id)a1 completionHandler:(id /* block */)a2;
- (void)_validateMessageForSending:(id)a0 conversation:(id)a1 associatedText:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_handleTextInputPayload:(id)a0 withPayloadID:(id)a1;
- (void)_didRemoveAssetArchiveWithIdentifier:(id)a0;
- (void)_prepareForPresentationWithCompletionHandler:(id /* block */)a0;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 destructiveButtonTitle:(id)a3 completion:(id /* block */)a4;
- (void)didReceiveMessage:(id)a0 conversation:(id)a1;
- (void)didStartSendingMessage:(id)a0 conversation:(id)a1;
- (void)didCancelSendingMessage:(id)a0 conversation:(id)a1;
- (void)willTransitionToPresentationStyle:(unsigned long long)a0;
- (void)didTransitionToPresentationStyle:(unsigned long long)a0;
- (void)_dismissAndPresentPhotosApp;
- (void)_volumeButtonPressed:(BOOL)a0;

@end
