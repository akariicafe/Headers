@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_source;

@interface CBALSTelemetry : CBModule <CBContainerModuleProtocol> {
    struct __IOHIDServiceClient { } *_alsService;
    NSObject<OS_dispatch_source> *_timer;
    NSUserDefaults *_defaults;
    double _timeFactor;
    unsigned long long _lastTimestampInMicroseconds;
    BOOL _alsLiveOnTelemetryEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (void)timerFired;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)initWithQueue:(id)a0;
- (id)copyALSSampleHistoryWithLength:(int)a0 frequency:(float)a1 lastTimestamp:(unsigned long long *)a2;
- (unsigned long long)getBootTimeInMicroSeconds;
- (void)handleSystemDidWakeFromSleepPropertyHandler:(id)a0;
- (void)handleSystemPrepareForSleepPropertyHandler:(id)a0;
- (BOOL)setALSService:(struct __IOHIDServiceClient { } *)a0;
- (void)updateLastTimestampInDefaults;

@end
