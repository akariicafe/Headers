@class NSMutableArray, NSArray, _GCHapticDynamicParameter, _GCHapticClientProxy, NSNumber, _GCHapticLogicalDevice;

@interface _GCHapticPlayer : NSObject {
    NSMutableArray *_scheduledCommands;
    NSMutableArray *_activeHapticEvents;
    NSMutableArray *_eventsToRemove;
    _GCHapticDynamicParameter *_intensityParameter;
    _GCHapticDynamicParameter *_sharpnessParameter;
    _GCHapticClientProxy *_client;
    BOOL _dirtyMuteState;
    BOOL _muted;
    int _muteReasons[5];
    BOOL _transientsEnqueuedSinceLastQuery;
    BOOL _activeEventThisSlice;
    double _initializationTime;
    double _activeLifetime;
    double _lastActiveTime;
    NSMutableArray *_intensityParamCurve;
    NSMutableArray *_sharpnessParamCurve;
}

@property (nonatomic) int totalEventsProcessed;
@property (nonatomic) int transientEventsProcessed;
@property (nonatomic) int continuousEventsProcessed;
@property (nonatomic) int parameterCurvesProcessed;
@property (nonatomic) double totalLifetimeInSeconds;
@property (readonly, copy, nonatomic) NSArray *actuators;
@property (weak, nonatomic) _GCHapticLogicalDevice *hapticLogicalDevice;
@property (readonly, copy, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) float continuousIntensity;
@property (readonly, nonatomic) float continuousSharpness;
@property (nonatomic, getter=isRetainedByClient) BOOL retainedByClient;

- (BOOL)isMuted;
- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearParameters;
- (id)description;
- (id)bundleIdentifier;
- (void)handleCommand:(id)a0;
- (BOOL)hasProcessedActiveEventsThisSlice;
- (BOOL)hasScheduledCommands;
- (BOOL)isMutedForReason:(unsigned long long)a0;
- (void)setMute:(BOOL)a0 forReason:(unsigned long long)a1;
- (id)controllerProductCategory;
- (double)activeLifetimeInSeconds;
- (id)initWithIdentifier:(unsigned long long)a0 actuators:(id)a1 client:(id)a2;
- (BOOL)transientsEnqueuedSinceLastQuery;
- (void)processSliceForLogicalDevice:(id)a0 startTime:(double)a1 endTime:(double)a2;
- (BOOL)hasProcessedActiveEventsAfterTime:(double)a0;
- (BOOL)hasScheduledEventsByTime:(double)a0;
- (BOOL)isActiveAtTime:(double)a0;
- (void)scheduleCommand:(const struct HapticCommand { struct MessageHeader { unsigned short x0; unsigned short x1; } x0; unsigned int x1; double x2; unsigned long long x3; unsigned long long x4; union { struct TokenAndParams { unsigned long long x0; struct ItemList<FixedParam, 8> { unsigned int x0; struct FixedParam { unsigned int x0; float x1; } x1[8]; } x1; } x0; struct SequenceChannelParam { unsigned long long x0; unsigned long long x1; float x2; } x1; struct SequenceParam { unsigned short x0; float x1; } x2; float x3; double x4; struct ItemList<ParamPoint, 16> { unsigned int x0; struct ParamPoint { float x0; float x1; } x1[16]; } x5; } x5; } *)a0;

@end
