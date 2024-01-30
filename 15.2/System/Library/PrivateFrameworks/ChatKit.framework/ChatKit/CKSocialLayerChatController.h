@class NSString, CKFullScreenBalloonViewControllerPhone;

@interface CKSocialLayerChatController : CKChatController

@property (retain, nonatomic) NSString *attachmentGUID;
@property (retain, nonatomic) NSString *messageGUID;
@property (weak, nonatomic) CKFullScreenBalloonViewControllerPhone *socialLayerFullScreenBalloonController;

+ (id)chatItemForMessageGUID:(id)a0 attachmentGUID:(id)a1 chatItems:(id)a2;
+ (id)chatIdentifierForMessageWithGUID:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConversation:(id)a0;
- (void)_setConversationDeferredSetup;
- (void)scrollToAndHighlightMessage;
- (id)selectedChatItems;
- (void)showFullScreenAcknowledgmentPickerForChatItem:(id)a0;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)a0;
- (BOOL)_controllerEligibleForSetConversation;
- (void)showTapBackPicker;
- (void)fullScreenBalloonViewController:(id)a0 sendMessageAcknowledgment:(long long)a1 forChatItem:(id)a2;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)a0;
- (void)fullScreenBalloonViewController:(id)a0 didAppearAnimated:(BOOL)a1;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)a0;
- (void)fullScreenBalloonViewController:(id)a0 willAppearAnimated:(BOOL)a1;
- (void)fullScreenBalloonViewController:(id)a0 replyButtonPressedForChatItem:(id)a1;
- (void)fullScreenBalloonViewController:(id)a0 willDisappearWithSendAnimation:(BOOL)a1;
- (void)fullScreenBalloonViewController:(id)a0 verticallyScrollTranscriptByAmount:(double)a1 animated:(BOOL)a2 completion:(id /* block */)a3;

@end
