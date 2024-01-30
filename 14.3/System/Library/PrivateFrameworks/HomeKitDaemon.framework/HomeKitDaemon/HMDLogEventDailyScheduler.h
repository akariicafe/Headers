@class NSString, NSHashTable;
@protocol HMDXPCActivityInterfacing;

@interface HMDLogEventDailyScheduler : HMFObject <HMFLogging>

@property (class, readonly) HMDLogEventDailyScheduler *sharedInstance;

@property (readonly, nonatomic) NSString *xpcActivityIdentifier;
@property (retain, nonatomic) NSHashTable *logEventDailyProviders;
@property (retain, nonatomic) id<HMDXPCActivityInterfacing> xpcActivityInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)registerLogEventDailyProvider:(id)a0;
- (id)initWithIdentifier:(id)a0 xpcActivityInterface:(id)a1;
- (void)_registerActivity;
- (void)_handleCheckInForActivity:(id)a0;
- (void)_runActivity:(id)a0;
- (id)_criteriaForActivity;

@end
