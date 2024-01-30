@class PLAgent;

@interface PLTelephonyConnection : NSObject {
    struct __CTServerConnection { } *connection;
    struct __CFMachPort { } *ctServerPort;
    struct __CFRunLoopSource { } *ctServerSource;
}

@property (readonly, nonatomic) struct __CTServerConnection { } *connection;
@property (retain) PLAgent *observerAgent;

+ (id)sharedTelephonyConnection;

- (id)activeBand;
- (void)getSignalStrength:(long long *)a0 asPercentage:(long long *)a1 withBars:(long long *)a2;
- (id)humanReadableCallStatus:(int)a0;
- (id)getRemotePortNameWithLocalName:(id)a0;
- (id)humanReadableRATName:(struct __CFString { } *)a0;
- (void)registerCallback:(void /* function */ *)a0 forTelephonyNotification:(struct __CFString { } *)a1;
- (void)teardownConnection;
- (id)currentCallStatus;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (BOOL)requestBasebandCoreDump:(id)a0;
- (void)getRAT:(id *)a0 preferredRAT:(id *)a1 campedRAT:(id *)a2;
- (void)enableDiagLogging;
- (BOOL)requestBasebandStateDump:(id)a0;
- (void)deregisterForAllTelephonyNotifications;
- (id)getProperty:(id)a0 forTrace:(id)a1;

@end
