@class SignpostCAInstrumentationProcessor, SignpostCAStallAggregation, NSObject;
@protocol OS_dispatch_queue;

@interface SignpostCAStallAggregationBuilder : NSObject {
    unsigned long long _frameLifetimeCount;
    unsigned long long _commitCount;
    unsigned long long _transactionLifetimeCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, nonatomic) SignpostCAStallAggregation *stallAggregation;
@property (readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (readonly, copy, nonatomic) SignpostCAStallAggregation *stallAggregationSnapshot;
@property (nonatomic) float maxDurationSec;

- (void)handleSignpostInterval:(id)a0;
- (void)handleSignpostEvent:(id)a0;
- (void).cxx_destruct;
- (void)handleSignpostIntervalBegin:(id)a0;
- (id)init;
- (id)newConfiguredExtractor;
- (void)handleDeviceReboot;
- (void)_handleLongCommit:(id)a0;
- (void)_handleLongTransactionLifetime:(id)a0;
- (void)_handleLongFrameLifetime:(id)a0;
- (void)_initializeCAInstrumentationProcessor;
- (void)addSubsystemCategoriesOfInterestToAllowlist:(id)a0;
- (BOOL)_isOverThreshold:(id)a0;
- (void)_processDurationNs:(unsigned long long)a0 type:(unsigned char)a1 processExecutablePath:(id)a2 pid:(int)a3 aggregateForSystem:(BOOL)a4;
- (void)addSubsystemCategoriesOfInterestToWhitelist:(id)a0;

@end
