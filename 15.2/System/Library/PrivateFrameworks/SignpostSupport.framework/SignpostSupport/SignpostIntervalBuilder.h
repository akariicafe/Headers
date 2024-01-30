@class NSMutableDictionary, NSMapTable, SignpostCAInstrumentationProcessor, NSObject;
@protocol OS_dispatch_queue;

@interface SignpostIntervalBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *systemwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *processwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *threadwideDictionary;
@property (retain, nonatomic) NSMapTable *outstandingAnimationState;
@property (nonatomic) unsigned long long totalCompositeIntervalCount;
@property (nonatomic) BOOL compositeIntervalIsInFlight;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) unsigned long long previousMCT;
@property (readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (nonatomic) BOOL buildAnimationCompositeIntervalTimelines;

+ (id)_framerateCalculationAllowlist;
+ (BOOL)_filterPassesRequiredSCForFramerate:(id)a0;

- (id)processEndEvent:(id)a0 isAnimation:(BOOL *)a1;
- (id)_animationWithBegin:(id)a0 endEvent:(id)a1;
- (BOOL)_hasOutstandingAnimations;
- (BOOL)_trackBegin:(id)a0;
- (BOOL)processBeginEvent:(id)a0;
- (void)_initializeMapsIfNecessary;
- (BOOL)_handleCommonSpecialIntervals:(id)a0;
- (void)_processCompositeInterval:(id)a0;
- (void)_cleanupStateForBeginEvent:(id)a0;
- (void)dropAccumulatedState;
- (BOOL)isMetadataSubsystem:(id)a0 category:(id)a1;
- (id)doneProcessing;
- (BOOL)signpostIsCompositeLoop:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)timestampIndicatesDeviceReboot:(unsigned long long)a0;
- (BOOL)signpostIsAnimationMetadata:(id)a0;
- (BOOL)_handleMacOsSpecialIntervals:(id)a0;
- (void)_startTrackingAnimationWithBeginEvent:(id)a0;
- (void)processEmittedEvent:(id)a0;
- (id)_matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;
- (BOOL)isCompositeLoopSubsystem:(id)a0 category:(id)a1;
- (id)matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;

@end
