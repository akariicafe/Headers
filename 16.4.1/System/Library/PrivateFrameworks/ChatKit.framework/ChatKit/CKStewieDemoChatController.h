@class IMSimulatedAccount, NSString, CKConversation;
@protocol CKStewieDemoChatControllerDelegate;

@interface CKStewieDemoChatController : CKChatController <IMSimulatedChatDelegate>

@property (retain, nonatomic) CKConversation *demoConversation;
@property (retain, nonatomic) IMSimulatedAccount *userPlaceholderAccount;
@property (retain, nonatomic) IMSimulatedAccount *demoParticipantAccount;
@property (weak, nonatomic) id<CKStewieDemoChatControllerDelegate> demoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)delegate;
- (id)conversation;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)_defaultCapacity;
- (id)_messageInfoForMessage:(id)a0;
- (void)ackSimulatedMessageGUID:(id)a0;
- (id)demoChat;
- (void)messageEntryViewSendButtonHit:(id)a0;
- (void)receiveMessageWithText:(id)a0;
- (void)selectAccountAndSendComposition:(id)a0 completion:(id /* block */)a1;
- (void)sendMessageWithText:(id)a0;
- (BOOL)shouldDismissAfterSend;
- (BOOL)shouldUseThrowAnimationForComposition:(id)a0;
- (void)simulatedChat:(id)a0 didHandleItem:(id)a1;
- (void)simulatedChat:(id)a0 didSendMessage:(id)a1;
- (id)simulatedChat:(id)a0 updatedTextForDemoUserComposedText:(id)a1;

@end
