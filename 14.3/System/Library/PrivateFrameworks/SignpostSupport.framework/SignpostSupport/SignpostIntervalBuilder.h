@class NSMutableDictionary, NSMapTable, SignpostCAInstrumentationProcessor, NSObject;
@protocol OS_dispatch_queue;

@interface SignpostIntervalBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *systemwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *processwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *threadwideDictionary;
@property (retain, nonatomic) NSMapTable *outstandingAnimationState;
@property (nonatomic) unsigned long long totalCompositeIntervalCount;
@property (nonatomic) BOOL compositeIntervalIsInFlight;
@property (nonatomic) BOOL foundMacOSSpecificData;
@property (nonatomic) BOOL foundIPhoneOSSpecificData;
@property (nonatomic) BOOL foundCAWSInMemoryData;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) unsigned long long previousMCT;
@property (readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (nonatomic) BOOL buildAnimationCompositeIntervalTimelines;

+ (BOOL)_filterPassesRequiredSCForFramerate:(id)a0;
+ (id)_framerateCalculationWhitelist;

- (id)init;
- (void).cxx_destruct;
- (id)doneProcessing;
- (void)processEmittedEvent:(id)a0;
- (id)matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;
- (void)dropAccumulatedState;
- (BOOL)timestampIndicatesDeviceReboot:(unsigned long long)a0;
- (BOOL)signpostIsAnimationMetadata:(id)a0;
- (BOOL)isMetadataSubsystem:(id)a0 category:(id)a1;
- (id)processEndEvent:(id)a0 isAnimation:(BOOL *)a1;
- (BOOL)processBeginEvent:(id)a0;
- (id)_matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;
- (BOOL)signpostIsCompositeLoop:(id)a0;
- (BOOL)isCompositeLoopSubsystem:(id)a0 category:(id)a1;
- (void)_initializeMapsIfNecessary;
- (BOOL)_trackBegin:(id)a0;
- (void)_startTrackingAnimationWithBeginEvent:(id)a0;
- (BOOL)_handleIPhoneOsSpecialEvents:(id)a0;
- (void)_processCompositeInterval:(id)a0;
- (BOOL)_hasOutstandingAnimations;
- (void)_cleanupStateForBeginEvent:(id)a0;
- (id)_animationWithBegin:(id)a0 endEvent:(id)a1;
- (BOOL)_handleCommonSpecialIntervals:(id)a0;
- (BOOL)_handleMacOsSpecialIntervals:(id)a0;
- (BOOL)_handleIPhoneOsSpecialIntervals:(id)a0;

@end
