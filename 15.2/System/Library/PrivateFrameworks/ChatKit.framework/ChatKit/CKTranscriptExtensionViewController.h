@class NSUUID, NSString, NSExtension, CKDetailsNavigationController;

@interface CKTranscriptExtensionViewController : UINavigationController <CKChatControllerDelegate>

@property (weak, nonatomic) CKDetailsNavigationController *detailsNavigationController;
@property (retain, nonatomic) NSUUID *requestUUID;
@property (weak, nonatomic) NSExtension *weakExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)viewDidLoad;
- (void)presentConversationWithMessageGUID:(id)a0 attachmentGUID:(id)a1;
- (void).cxx_destruct;
- (void)chatController:(id)a0 forwardComposition:(id)a1;
- (void)chatController:(id)a0 willSendComposition:(id)a1 inConversation:(id)a2;
- (void)chatController:(id)a0 didSendCompositionInConversation:(id)a1;
- (void)chatController:(id)a0 didReportSpamForConversation:(id)a1;
- (void)prewarmCameraIfNecessaryForChatController:(id)a0;
- (void)doneButtonPressedForChatController:(id)a0;
- (void)presentDetailsNavigationController:(id)a0;
- (BOOL)__im_ff_chatCacheEnabled;

@end
