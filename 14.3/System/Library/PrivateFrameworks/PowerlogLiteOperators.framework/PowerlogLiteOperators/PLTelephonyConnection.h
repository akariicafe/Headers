@class PLAgent;

@interface PLTelephonyConnection : NSObject {
    struct __CTServerConnection { } *connection;
    struct __CFMachPort { } *ctServerPort;
    struct __CFRunLoopSource { } *ctServerSource;
}

@property (readonly, nonatomic) struct __CTServerConnection { } *connection;
@property (retain) PLAgent *observerAgent;

+ (id)sharedTelephonyConnection;

- (id)currentCallStatus;
- (void)teardownConnection;
- (id)humanReadableCallStatus:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)requestBasebandCoreDump:(id)a0;
- (void)enableDiagLogging;
- (void)deregisterForAllTelephonyNotifications;
- (void)getRAT:(id *)a0 preferredRAT:(id *)a1 campedRAT:(id *)a2;
- (id)humanReadableRATName:(struct __CFString { } *)a0;
- (id)getProperty:(id)a0 forTrace:(id)a1;
- (id)getRemotePortNameWithLocalName:(id)a0;
- (void)registerCallback:(void /* function */ *)a0 forTelephonyNotification:(struct __CFString { } *)a1;
- (id)activeBand;
- (BOOL)requestBasebandStateDump:(id)a0;
- (void)invalidate;
- (void)getSignalStrength:(long long *)a0 asPercentage:(long long *)a1 withBars:(long long *)a2;

@end
