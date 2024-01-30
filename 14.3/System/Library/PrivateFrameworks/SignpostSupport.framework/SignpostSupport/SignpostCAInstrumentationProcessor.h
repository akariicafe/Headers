@class NSMutableDictionary, SignpostEvent;

@interface SignpostCAInstrumentationProcessor : NSObject

@property (readonly, nonatomic) NSMutableDictionary *frameSeedToAccumulatedStateDict;
@property (retain, nonatomic) SignpostEvent *curLongFrameLifetimeBegin;
@property (retain, nonatomic) SignpostEvent *curFrameLifetimeBegin;
@property (nonatomic) unsigned int curFrameSeed;
@property (nonatomic) BOOL isConciseFormat;
@property (copy, nonatomic) id /* block */ commitIntervalBlock;
@property (copy, nonatomic) id /* block */ transactionLifetimeBlock;
@property (copy, nonatomic) id /* block */ frameLatencyBlock;
@property (copy, nonatomic) id /* block */ hidLatencyBlock;
@property (copy, nonatomic) id /* block */ renderBlock;
@property (copy, nonatomic) id /* block */ frameLifetimeBlock;
@property (copy, nonatomic) id /* block */ contextInfoBlock;

+ (void)addNeededSCToWhitelist:(id)a0;
+ (BOOL)filterPassesRequiredSCForCAInstrumentation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_stateForFrameSeed:(unsigned int)a0;
- (void)_cleanupStateWithSeed:(unsigned int)a0;
- (void)_handleFrameLifetimeBegin:(id)a0;
- (void)_handleLongFrameLifetimeBegin:(id)a0;
- (void)_handleHIDInterval:(id)a0;
- (void)_handleRenderInterval:(id)a0;
- (void)_handleFrameLatencyInterval:(id)a0;
- (void)_handleFrameLifetimeInterval:(id)a0 isLong:(BOOL)a1;
- (void)_handleContextInfo:(id)a0;
- (BOOL)handleSignpostInterval:(id)a0;
- (void)handleSignpostIntervalBegin:(id)a0;
- (BOOL)handleSignpostEvent:(id)a0;
- (void)handleDeviceReboot;
- (id)newConfiguredExtractor;

@end
