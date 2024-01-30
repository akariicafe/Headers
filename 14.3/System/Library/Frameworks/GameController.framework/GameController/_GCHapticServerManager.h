@class BKSApplicationStateMonitor, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _GCHapticServerManager : NSObject {
    unsigned long long _nextClientID;
    unsigned long long _tickCount;
    float _tickLengthSeconds;
    BOOL _running;
    BOOL _idle;
    unsigned long long _channelID;
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *_logicalHapticDevices;
    NSMutableDictionary *_clientInvalidationHandlers;
    NSMutableDictionary *_hapticPlayers;
    BKSApplicationStateMonitor *_appMonitor;
}

@property (retain, nonatomic) NSMutableDictionary *clients;
@property (nonatomic) BOOL activeEvents;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *runloopQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)notifyPlayerNoLongerRetained:(id)a0;
- (void)scheduleCommand:(const struct HapticCommand { struct MessageHeader { unsigned short x0; unsigned short x1; } x0; unsigned int x1; double x2; unsigned long long x3; unsigned long long x4; union { struct TokenAndParams { unsigned long long x0; struct ItemList<FixedParam, 8> { unsigned int x0; struct FixedParam { unsigned int x0; float x1; } x1[8]; } x1; } x0; struct SequenceChannelParam { unsigned long long x0; unsigned long long x1; float x2; } x1; struct SequenceParam { unsigned short x0; float x1; } x2; float x3; double x4; struct ItemList<ParamPoint, 16> { unsigned int x0; struct ParamPoint { float x0; float x1; } x1[16]; } x5; } x5; } *)a0;
- (void)logicalDeviceWasUnregistered:(id)a0;
- (void)removeHapticClient:(id)a0;
- (void)spawnInputThread;
- (void)enterRunloop;
- (void)readListCommand:(struct HapticCommand { struct MessageHeader { unsigned short x0; unsigned short x1; } x0; unsigned int x1; double x2; unsigned long long x3; unsigned long long x4; union { struct TokenAndParams { unsigned long long x0; struct ItemList<FixedParam, 8> { unsigned int x0; struct FixedParam { unsigned int x0; float x1; } x1[8]; } x1; } x0; struct SequenceChannelParam { unsigned long long x0; unsigned long long x1; float x2; } x1; struct SequenceParam { unsigned short x0; float x1; } x2; float x3; double x4; struct ItemList<ParamPoint, 16> { unsigned int x0; struct ParamPoint { float x0; float x1; } x1[16]; } x5; } x5; })a0 client:(id)a1 renderTime:(double)a2;
- (BOOL)readClientDataForStartTime:(double)a0 endTime:(double)a1;
- (BOOL)playersHaveImpendingCommandsForStartTime:(double)a0 endTime:(double)a1;
- (void)processScheduledCommandsForStartTime:(double)a0 endTime:(double)a1;
- (void)processActiveEventsForStartTime:(double)a0 endTime:(double)a1;
- (void)identifyCompletedClients;
- (void)readParamCurveListCommand:(struct HapticCommand { struct MessageHeader { unsigned short x0; unsigned short x1; } x0; unsigned int x1; double x2; unsigned long long x3; unsigned long long x4; union { struct TokenAndParams { unsigned long long x0; struct ItemList<FixedParam, 8> { unsigned int x0; struct FixedParam { unsigned int x0; float x1; } x1[8]; } x1; } x0; struct SequenceChannelParam { unsigned long long x0; unsigned long long x1; float x2; } x1; struct SequenceParam { unsigned short x0; float x1; } x2; float x3; double x4; struct ItemList<ParamPoint, 16> { unsigned int x0; struct ParamPoint { float x0; float x1; } x1[16]; } x5; } x5; })a0 client:(id)a1;
- (BOOL)acceptNewConnection:(id)a0 fromHapticsEnabledApp:(id)a1;
- (void)hapticClientProxyInitialized:(id)a0;
- (id)__onqueue_reserveChannels:(unsigned long long)a0 forClient:(id)a1;

@end
