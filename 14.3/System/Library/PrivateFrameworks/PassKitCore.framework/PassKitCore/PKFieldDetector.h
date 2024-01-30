@class PKFieldProperties, NSString, NFLoyaltyAndPaymentSession, NSHashTable, NSObject, NFFieldDetectSession;
@protocol NFSession, OS_dispatch_source, OS_dispatch_queue, PKFieldDetectorDelegate;

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate> {
    NFFieldDetectSession *_fieldDetectSession;
    unsigned long long _fieldDetectSessionRetryCount;
    BOOL _fieldDetectSessionRequested;
    BOOL _nfcRadioEnabled;
    PKFieldProperties *_fieldPropertiesToLookup;
    NFLoyaltyAndPaymentSession *_fieldPropertiesLookupSession;
    NSObject<NFSession> *_fieldPropertiesLookupSessionHandle;
    NSObject<OS_dispatch_source> *_fieldPropertiesLookupTimer;
    unsigned long long _fieldPropertieslookupSynchronizer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
    unsigned long long _enablePersistentFieldDetectionReasons;
    PKFieldProperties *_fieldProperties;
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly, weak, nonatomic) PKFieldProperties *fieldProperties;
@property (weak, nonatomic) id<PKFieldDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_evaulatePersistentFieldDetectionEnablementReasons;
- (void)_setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)registerObserver:(id)a0;
- (void)_endLookupAndNotify;
- (id)init;
- (void)_endLookup;
- (void).cxx_destruct;
- (void)fieldDetectSessionDidExitField:(id)a0;
- (void)dealloc;
- (void)_startFieldDetectSession;
- (void)updateRadioState;
- (void)fieldDetectSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)_startLookup;
- (void)loyaltyAndPaymentSession:(id)a0 didEndTransaction:(id)a1;
- (void)unregisterObserver:(id)a0;
- (void)_restartFieldDetectSession;
- (void)requestPersistentFieldDetectionEnabled:(BOOL)a0 withReason:(unsigned long long)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didPerformValueAddedServiceTransactions:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)_invalidateFieldDetectSession;
- (void)setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)a0;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)a0;

@end
