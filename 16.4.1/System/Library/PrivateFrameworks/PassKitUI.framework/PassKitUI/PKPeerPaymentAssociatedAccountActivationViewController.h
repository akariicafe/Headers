@class PKFamilyMember, NSString, PKPeerPaymentIconEducationView, PKPeerPaymentSetupFlowController, PKPeerPaymentAccount, NSObject, PKDeviceSharingCapabilities;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate, OS_dispatch_source;

@interface PKPeerPaymentAssociatedAccountActivationViewController : PKExplanationViewController <PKDeviceSharingCapabilitiesManagerObserver> {
    PKPeerPaymentSetupFlowController *_controller;
    PKFamilyMember *_familyMember;
    id<PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;
    unsigned long long _state;
    long long _setupType;
    PKPeerPaymentIconEducationView *_iconEducationView;
    PKPeerPaymentAccount *_account;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _timerHasFired;
    PKDeviceSharingCapabilities *_childAppleCashCapabilities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(unsigned long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_cancelTimer;
- (void).cxx_destruct;
- (void)deviceSharingCapabilitiesUpdated:(id)a0 maximumPossibleDevices:(long long)a1 forAppleID:(id)a2;
- (void)deviceSharingCapabilitiesUpdated:(id)a0 newSharingCapabilties:(id)a1 forAppleID:(id)a2;
- (void)_checkFamilyMemberAppleCashCapabilities;
- (void)_handlePeerPaymentAccountDidChangeNotification;
- (BOOL)_isAssociatedAccountPending;
- (unsigned long long)_nextStateAfterCheckingFamilyMemberAppleCashCapabilities:(BOOL *)a0;
- (void)_presentDisplayableError:(id)a0;
- (void)_sendMoneyInMessages;
- (void)_showSpinner:(BOOL)a0;
- (void)_startTimerIfNeccessary;
- (void)_terminateAddAssociatedAccountFlowWithSucces:(BOOL)a0 updatedAccount:(id)a1;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithPeerPaymentSetupFlowController:(id)a0;

@end
