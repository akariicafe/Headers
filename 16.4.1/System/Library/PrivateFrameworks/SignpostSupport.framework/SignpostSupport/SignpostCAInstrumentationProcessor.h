@class NSMutableDictionary, SignpostEvent;

@interface SignpostCAInstrumentationProcessor : NSObject

@property (readonly, nonatomic) NSMutableDictionary *frameSeedToAccumulatedStateDict;
@property (readonly, nonatomic) NSMutableDictionary *frameSeedToAccumulatedRenderStateDict;
@property (readonly, nonatomic) NSMutableDictionary *queueIDToSurfaceIDToClientDrawableIntervalDict;
@property (retain, nonatomic) SignpostEvent *curLongFrameLifetimeBegin;
@property (retain, nonatomic) SignpostEvent *curFrameLifetimeBegin;
@property (nonatomic) unsigned int curFrameSeed;
@property (nonatomic) BOOL isConciseFormat;
@property (copy, nonatomic) id /* block */ commitIntervalBlock;
@property (copy, nonatomic) id /* block */ clientDrawableIntervalBlock;
@property (copy, nonatomic) id /* block */ transactionLifetimeBlock;
@property (copy, nonatomic) id /* block */ frameLatencyBlock;
@property (copy, nonatomic) id /* block */ hidLatencyBlock;
@property (copy, nonatomic) id /* block */ renderBlock;
@property (copy, nonatomic) id /* block */ frameLifetimeBlock;
@property (copy, nonatomic) id /* block */ contextInfoBlock;
@property (copy, nonatomic) id /* block */ imageQueueSampleEventBlock;

+ (void)addNeededMetalSCToAllowlist:(id)a0;
+ (void)addNeededSCToAllowlist:(id)a0;
+ (void)addNeededSCToWhitelist:(id)a0;
+ (BOOL)filterPassesRequiredSCForCAInstrumentation:(id)a0;
+ (BOOL)filterPassesRequiredSCForCAMetalInstrumentation:(id)a0;

- (void)_handleFrameLifetimeBegin:(id)a0;
- (void)handleDeviceReboot;
- (void)_handleClientDrawableInterval:(id)a0;
- (void)_cleanupStateWithSeed:(unsigned int)a0;
- (id)_renderStateForFrameSeed:(unsigned int)a0;
- (BOOL)handleSignpostEvent:(id)a0;
- (void)_handleRenderInterval:(id)a0;
- (void)_handleFrameLatencyInterval:(id)a0;
- (id)init;
- (void)handleSignpostIntervalBegin:(id)a0;
- (void)_handleHIDInterval:(id)a0;
- (id)_stateForFrameSeed:(unsigned int)a0;
- (void)_handleFrameLifetimeInterval:(id)a0 isLong:(BOOL)a1;
- (void).cxx_destruct;
- (id)newConfiguredExtractor;
- (void)_handleContextInfo:(id)a0;
- (BOOL)handleSignpostInterval:(id)a0;
- (void)_handleImageQueueSampleEvent:(id)a0;
- (void)_handleLongFrameLifetimeBegin:(id)a0;

@end
