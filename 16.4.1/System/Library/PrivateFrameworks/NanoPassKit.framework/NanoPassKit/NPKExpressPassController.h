@class PKPass, NSString, PKPaymentService, NSSet, PKFieldDetector, NSDictionary, NSObject, PKExpressPassInformation, PKPassLibrary, NSDistributedNotificationCenter;
@protocol NPKExpressPassControllerDelegate, OS_dispatch_queue;

@interface NPKExpressPassController : NSObject <PKFieldDetectorObserver> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _expressPassChangedNotifyToken;
    unsigned long long _transactionStatus;
    PKPaymentService *_paymentService;
}

@property (retain, nonatomic) PKPass *currentTransactionPass;
@property (readonly, weak, nonatomic) PKPassLibrary *passLibrary;
@property (retain) NSSet *expressPassesInformation;
@property (retain) NSDictionary *expressPasses;
@property (readonly, weak, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (retain, nonatomic) PKExpressPassInformation *currentTransactionExpressPassInformation;
@property (retain, nonatomic) NSString *currentApplicationIdentifier;
@property (retain, nonatomic) NSString *currentSubCredentialIdentifier;
@property (retain, nonatomic) PKFieldDetector *fieldDetector;
@property (weak) id<NPKExpressPassControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)fieldDetectorDidEnterField:(id)a0 withProperties:(id)a1;
- (id)paymentService;
- (id)_expressPassInformationWithTechnologyType:(long long)a0;
- (id)_expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)a0;
- (id)_expressPassesInformationWithTCIs:(id)a0;
- (void)_handleCarKeyExpressEnteredNotification:(id)a0;
- (void)_handleCarKeyExpressExitedNotification:(id)a0;
- (void)_handleCarKeyRKEActionCompletedNotification:(id)a0;
- (void)_handleCarKeyRangingEndedNotification:(id)a0;
- (void)_handleCarKeyRangingStartedNotification:(id)a0;
- (void)_handleCarKeySessionEndedNotification:(id)a0;
- (void)_handleCarKeySessionEndedWithErrorNotification:(id)a0;
- (void)_handleCarKeyVehicleConnectedNotification:(id)a0;
- (void)_handleCarKeyVehicleDisconnectedNotification:(id)a0;
- (void)_handleCarKeyVehicleLockedNotification:(id)a0;
- (void)_handleCarKeyVehicleUnlockedNotification:(id)a0;
- (void)_handleEnterNearFieldNotification:(id)a0;
- (void)_handleExitNearFieldNotification:(id)a0;
- (void)_handleExpressTransactionEndNotification:(id)a0;
- (void)_handleExpressTransactionFailedNotification:(id)a0;
- (void)_handleExpressTransactionStartNotification:(id)a0;
- (void)_handleExpressTransactionTimeOutNotification:(id)a0;
- (void)_handlePassesLibraryChangedNotification:(id)a0;
- (void)_handleStandaloneTransactionDoneNotification:(id)a0;
- (BOOL)_hasNoTransactionStartOrEndNotificationForTechnologyType:(long long)a0;
- (void)_internalQueue_startFieldDetector;
- (void)_internalQueue_stopFieldDetector;
- (void)_internalQueue_updateExpressPasses;
- (void)_onqueue_transactionCompletedForRKEAction:(id)a0 function:(id)a1 withApplicationIdentifier:(id)a2 applicationKeyIdentifier:(id)a3;
- (void)_onqueue_transactionCompletedForStandaloneTransactionEvent:(unsigned long long)a0 withApplicationIdentifier:(id)a1 applicationKeyIdentifier:(id)a2;
- (void)_onqueue_transactionEndedWithApplicationIdentifier:(id)a0 applicationKeyIdentifier:(id)a1;
- (void)_onqueue_transactionFailedWithApplicationIdentifier:(id)a0 applicationKeyIdentifier:(id)a1;
- (void)_onqueue_transactionStartedWithApplicationIdentifier:(id)a0 applicationKeyIdentifier:(id)a1;
- (void)_parseExpressNotificationObject:(id)a0 outApplicationIdentifier:(id *)a1 outApplicationKeyIdentifier:(id *)a2;
- (void)_parseRKEActionNotificationObject:(id)a0 outApplicationIdentifier:(id *)a1 outApplicationKeyIdentifier:(id *)a2 outFunctionNumber:(id *)a3 outActionNumber:(id *)a4 outExecutionStatusNumber:(id *)a5 outErrorMessage:(id *)a6;
- (id)_queue_expressPassForTransactionApplicationIdentifier:(id)a0 transactionApplicationKeyIdentifier:(id)a1;
- (id)_queue_siblingExpressPassesForExpressPass:(id)a0 applicationIdentifier:(id)a1;
- (void)_startListeningForExpressNotifications;
- (void)_stopListeningForExpressNotifications;
- (void)_transitionToCompletedRKEAction:(id)a0 function:(id)a1 forExpressPass:(id)a2;
- (void)_transitionToStandaloneTransactionEvent:(unsigned long long)a0 forExpressPass:(id)a1;
- (void)_transitionToStatus:(unsigned long long)a0 forExpressPass:(id)a1 paymentApplicationIdentifier:(id)a2;
- (id)initWithPaymentService:(id)a0 passLibrary:(id)a1 distributedNotificationCenter:(id)a2 delegate:(id)a3;
- (void)updateExpressPasses;

@end
