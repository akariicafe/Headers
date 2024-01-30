@class NSString, NSOperationQueue, ACAccountStore, ACAccount, UIViewController;
@protocol FAFamilySetupPrompterDelegate;

@interface FAFamilySetupPrompter : NSObject <FASetupDelegate> {
    ACAccountStore *_accountStore;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccount *_iTunesAccount;
    UIViewController *_presentingViewController;
    NSOperationQueue *_networkingQueue;
    BOOL _isRequestInFlight;
}

@property (weak, nonatomic) id<FAFamilySetupPrompterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithiTunesAccount:(id)a0;
- (void)promptIfEligibleWithPresentingViewController:(id)a0 isFirstRun:(BOOL)a1;
- (void)dealloc;
- (void)familySetupViewController:(id)a0 didCompleteWithSuccess:(BOOL)a1;
- (void)_showUnderageAlertWithEligibilityResponse:(id)a0;
- (void)_handleFamilyEligibilityResponse:(id)a0 isFirstRun:(BOOL)a1;
- (void)_showConfirmationForStartingFamilySetupWithPendingInvite;
- (void)_showConfirmationForStartingFamilySetup;
- (void)_showPendingInvitesDialog;
- (void)_startFamilySetupFlowWithEligibilityResponse:(id)a0;
- (void)_goToFamilySetup;
- (void)_goToInvitations;

@end
