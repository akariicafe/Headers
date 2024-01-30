@class NSString, NSMutableDictionary, NSDictionary, NSSet, NSObject, NSNumber;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CBGrimaldiModule : CBModule <CBContainerModuleProtocol> {
    NSObject<OS_dispatch_queue> *_rLuxTimerQueue;
    struct APDSLuxInfo { float *luxSamples; float *gains; unsigned long long *absoluteTime; char *coexFlags; int error; unsigned char numSamples; } _rLuxInfo;
    NSMutableDictionary *_currentRLuxOutputDict;
    NSDictionary *_lastRLuxOutputDict;
    NSMutableDictionary *_overriddenInput;
    BOOL _overriding;
    NSObject<OS_dispatch_source> *_timer;
    NSSet *_validKeys;
    NSNumber *_lastLux;
    double _correctionFactor;
    int _currentNumSamples;
    BOOL _sampleOnce;
    BOOL _sampleMultiple;
    BOOL _started;
    void *APDSGlobalCorrectionSymbolAddr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)registerNotificationBlock:(id /* block */)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)unregisterNotificationBlock;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)initWithQueue:(id)a0;
- (void)CBAPDSGetLux;
- (id)copyReliableLux;
- (void)clearOutput;
- (id)copyParam:(id)a0;
- (int)getNextNumberOfSamplesFromNewLux:(float)a0;
- (BOOL)loadAPDS;
- (void)setGrimaldiLux;
- (void)startSingleSample;
- (void)startWithFrequency:(float)a0;
- (void)startWithFrequency:(float)a0 singleSample:(BOOL)a1;

@end
