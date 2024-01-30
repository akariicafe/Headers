@class NSString, NSDate, NSHashTable;
@protocol HMDXPCActivityInterfacing, HMMLogEventSubmitting;

@interface HMDLogEventDailyScheduler : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDLogEventDailyScheduler *sharedInstance;

@property (copy) id /* block */ dateFactory;
@property (retain, nonatomic) NSDate *lastRunTime;
@property (readonly, nonatomic) NSString *xpcActivityIdentifier;
@property (retain, nonatomic) NSHashTable *mutableLogEventDailyProviders;
@property (retain, nonatomic) id<HMDXPCActivityInterfacing> xpcActivityInterface;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)_registerActivity;
- (void).cxx_destruct;
- (id)init;
- (void)_runActivity:(id)a0;
- (void)registerLogEventDailyProvider:(id)a0;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 xpcActivityInterface:(id)a2 dateFactory:(id /* block */)a3;
- (id)_criteriaForActivity;
- (void)_handleCheckInForActivity:(id)a0;
- (void)_runRegisteredBlocks;
- (id)logEventDailyProviders;
- (void)forceRunRegisteredBlocks;
- (id)statusSummary;

@end
