@class PKPass, NSString, PKPaymentService, NSSet, PKFieldDetector, NSDictionary, NSObject, PKExpressPassInformation, PKPassLibrary, NSDistributedNotificationCenter;
@protocol NPKExpressPassControllerDelegate, OS_dispatch_queue;

@interface NPKExpressPassController : NSObject <PKFieldDetectorObserver> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _expressPassChangedNotifyToken;
    unsigned long long _transactionStatus;
    PKPaymentService *_queue_paymentService;
}

@property (retain, nonatomic) PKPass *currentTransactionPass;
@property (readonly, weak, nonatomic) PKPassLibrary *passLibrary;
@property (retain) NSSet *expressPassesInformation;
@property (retain) NSDictionary *expressPasses;
@property (readonly, weak, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (retain, nonatomic) PKExpressPassInformation *currentTransactionExpressPassInformation;
@property (retain, nonatomic) PKFieldDetector *fieldDetector;
@property (weak) id<NPKExpressPassControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)fieldDetectorDidEnterField:(id)a0 withProperties:(id)a1;
- (void)_queue_updateExpressPasses;
- (void)updateExpressPasses;
- (id)initWithPaymentService:(id)a0 passLibrary:(id)a1 distributedNotificationCenter:(id)a2 delegate:(id)a3 callbackQueue:(id)a4;
- (void)_transitionToStatus:(unsigned long long)a0 forExpressPass:(id)a1 paymentApplicationIdentifier:(id)a2;
- (id)_queue_siblingExpressPassesForExpressPass:(id)a0 applicationIdentifier:(id)a1;
- (void)_handleEnterNearFieldNotification:(id)a0;
- (void)_handleExpressTransactionStartNotification:(id)a0;
- (void)_handleExpressTransactionTimeOutNotification:(id)a0;
- (void)_handleExpressTransactionEndNotification:(id)a0;
- (void)_handleExpressTransactionFailedNotification:(id)a0;
- (void)_handleExitNearFieldNotification:(id)a0;
- (void)_handlePassesLibraryChangedNotification:(id)a0;
- (id)_expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)a0;
- (BOOL)_hasNoTransactionStartOrEndNotificationForTechnologyType:(long long)a0;
- (void)_parseExpressNotificationObject:(id)a0 outApplicationIdentifier:(id *)a1 outApplicationKeyIdentifier:(id *)a2;
- (void)_onqueue_transactionStartedWithApplicationIdentifier:(id)a0 applicationKeyIdentifier:(id)a1;
- (void)_onqueue_transactionEndedWithApplicationIdentifier:(id)a0 applicationKeyIdentifier:(id)a1;
- (void)_onqueue_transactionFailedWithApplicationIdentifier:(id)a0 applicationKeyIdentifier:(id)a1;
- (id)_queue_expressPassForTransactionApplicationIdentifier:(id)a0 transactionApplicationKeyIdentifier:(id)a1;
- (id)_queue_paymentService;
- (void)_startListeningForExpressNotifications;
- (void)_stopListeningForExpressNotifications;
- (void)_startFieldDetector;
- (void)_stopFieldDetector;
- (id)_expressPassesInformationWithTCIs:(id)a0;
- (id)_expressPassInformationWithTechnologyType:(long long)a0;
- (id)initWithDelegate:(id)a0 callbackQueue:(id)a1;

@end
