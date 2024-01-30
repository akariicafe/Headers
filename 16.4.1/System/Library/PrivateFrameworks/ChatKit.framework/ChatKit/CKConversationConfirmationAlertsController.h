@class NSArray, UIViewController;

@interface CKConversationConfirmationAlertsController : NSObject

@property (nonatomic) long long alertControllerStyle;
@property (retain, nonatomic) NSArray *selectedConversations;
@property (retain, nonatomic) NSArray *junkConversations;
@property (retain, nonatomic) UIViewController *presentationViewController;

- (void).cxx_destruct;
- (void)_configureAppearanceForAlertController:(id)a0;
- (id)_conversationDeletionAlertMessageForConversationCount:(unsigned long long)a0;
- (BOOL)_hasChatSharingLocationInConversations:(id)a0;
- (id)_identifyBusinessConversationToRemove:(id)a0;
- (id)_identifySpamConversationsToRemove:(id)a0;
- (BOOL)_isStoredOnIcloud;
- (id)_junkRecoveryAlertMessageForCount:(unsigned long long)a0;
- (id)_junkRecoveryAlertTitleForCount:(unsigned long long)a0;
- (void)_markConversationsAsSpam:(id)a0;
- (id)_moveToRecentlyDeletedAlertMessageForMessagesCount:(unsigned long long)a0;
- (id)_moveToRecentlyDeletedAlertTitleForConversationsCount:(unsigned long long)a0;
- (id)_moveToRecentlyDeletedAlertTitleForMessagesCount:(unsigned long long)a0;
- (unsigned long long)_numberOfRecoverableMessagesInConversations:(id)a0;
- (id)_permanentDeletionAlertMessageForCount:(unsigned long long)a0;
- (id)_permanentDeletionAlertTitleForCount:(unsigned long long)a0;
- (id)_permanentJunkDeletionAlertTitleForCount:(unsigned long long)a0;
- (void)_presentEndBusinessChatConfirmationForBusinessConversation:(id)a0 actionCompletionBlock:(id /* block */)a1;
- (void)_presentRecoverableDeletionConfirmationWithConfirmedBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)_presentStopSharingLocationConfirmationWithActionCompletionBlock:(id /* block */)a0;
- (id)_recoveryAlertMessageForCount:(unsigned long long)a0;
- (id)_recoveryAlertTitleForCount:(unsigned long long)a0;
- (id)_reportSpamConfirmationMessageForJunkConversations;
- (BOOL)_shouldConfirmStopSharingLocationForConversations:(id)a0;
- (id)_spamReportDestinationsForJunkConversations;
- (void)_stopSharingLocationInConversations:(id)a0;
- (void)_trackEvent:(long long)a0 forConversations:(id)a1;
- (void)presentPermanentDeletionConfirmationFromViewController:(id)a0 forConversations:(id)a1 alertControllerStyle:(long long)a2 alertsCompletedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)presentPermanentJunkDeletionConfirmationFromViewController:(id)a0 forConversations:(id)a1 alertControllerStyle:(long long)a2 alertsCompletedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)presentRecoverDeletedConversationsConfirmationFromViewController:(id)a0 forConversations:(id)a1 alertControllerStyle:(long long)a2 alertsCompletedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)presentRecoverJunkConversationsConfirmationFromViewController:(id)a0 forConversations:(id)a1 alertControllerStyle:(long long)a2 alertsCompletedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)presentRecoverableDeletionConfirmationsFromViewController:(id)a0 forConversations:(id)a1 alertControllerStyle:(long long)a2 alertsCompletedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)presentRecoverableDeletionConfirmationsFromViewController:(id)a0 forMessagesCount:(unsigned long long)a1 alertControllerStyle:(long long)a2 sender:(id)a3 alertsCompletedBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;

@end
