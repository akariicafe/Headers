@class PKFamilyMember, NSString, PKPeerPaymentIconEducationView, PKPeerPaymentSetupFlowController, PKPeerPaymentAccount, NSObject, PKAppleCashSharingRecipientCapabilities;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate, OS_dispatch_source;

@interface PKPeerPaymentAssociatedAccountActivationViewController : PKExplanationViewController <PKPeerPaymentSetupFlowControllerDelegate> {
    PKPeerPaymentSetupFlowController *_controller;
    PKFamilyMember *_familyMember;
    id<PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;
    unsigned long long _state;
    PKPeerPaymentIconEducationView *_iconEducationView;
    PKPeerPaymentAccount *_account;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _timerHasFired;
    PKAppleCashSharingRecipientCapabilities *_childAppleCashCapabilities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(unsigned long long)a0;
- (id)initWithPeerPaymentSetupFlowController:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)_terminateAddAssociatedAccountFlowWithSucces:(BOOL)a0 updatedAccount:(id)a1;
- (void)_handlePeerPaymentAccountDidChangeNotification;
- (void)_checkFamilyMemberAppleCashCapabilities;
- (void)_sendMoneyInMessages;
- (BOOL)_isAssociatedAccountPending;
- (void)_startTimerIfNeccessary;
- (unsigned long long)_nextStateAfterCheckingFamilyMemberAppleCashCapabilities:(BOOL *)a0;
- (void)familyMemberAppleCashCapabilitiesUpdated:(id)a0 forHandle:(id)a1;
- (void)_cancelTimer;
- (void)_presentDisplayableError:(id)a0;
- (void)viewDidLoad;

@end
