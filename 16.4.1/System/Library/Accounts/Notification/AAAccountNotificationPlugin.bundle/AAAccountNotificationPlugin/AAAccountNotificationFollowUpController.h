@class AAFollowUpController;

@interface AAAccountNotificationFollowUpController : NSObject {
    AAFollowUpController *_followUpController;
}

+ (id)_secondaryAccountTypes;

- (void)_updateVerifyTermsFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)updateVerifyTermsFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)_dismissStartUsingFollowUp;
- (BOOL)_didDeleteAccount:(id)a0 oldAccount:(id)a1;
- (BOOL)_didAddAccount:(id)a0 oldAccount:(id)a1;
- (void)dismissAllFollowupsForAccount:(id)a0;
- (id)init;
- (void)_updateStartUsingiCloudFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)updateStartUsingiCloudFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void).cxx_destruct;

@end
