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
@property (readonly, nonatomic) BOOL hasOutstandingAnimations;

+ (id)_metalCalculationAllowlist;
+ (BOOL)_filterPassesRequiredSCForFramerate:(id)a0 includeMetal:(BOOL)a1;
+ (id)_framerateCalculationAllowlist:(BOOL)a0;

- (BOOL)timestampIndicatesDeviceReboot:(unsigned long long)a0;
- (BOOL)signpostIsCompositeLoop:(id)a0;
- (BOOL)isCompositeLoopSubsystem:(id)a0 category:(id)a1;
- (BOOL)_trackBegin:(id)a0;
- (BOOL)signpostIsAnimationMetadata:(id)a0;
- (id)doneProcessing;
- (id)matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;
- (void)_cleanupStateForBeginEvent:(id)a0;
- (void)_startTrackingAnimationWithBeginEvent:(id)a0;
- (void)_processCompositeInterval:(id)a0;
- (BOOL)_handleMacOsSpecialIntervals:(id)a0;
- (void)processEmittedEvent:(id)a0;
- (void)dropAccumulatedState;
- (id)processEndEvent:(id)a0 firstFrameGraceTimeController:(id)a1 isAnimation:(BOOL *)a2;
- (id)init;
- (id)_animationWithBegin:(id)a0 endEvent:(id)a1 firstFrameGraceTimeController:(id)a2;
- (BOOL)isMetadataSubsystem:(id)a0 category:(id)a1;
- (BOOL)_handleCommonSpecialIntervals:(id)a0;
- (id)_matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;
- (void)_initializeMapsIfNecessary;
- (void).cxx_destruct;
- (BOOL)processBeginEvent:(id)a0;

@end
