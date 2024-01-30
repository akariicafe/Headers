@class PLAgent;

@interface PLTelephonyConnection : NSObject {
    struct __CTServerConnection { } *connection;
    struct __CFMachPort { } *ctServerPort;
    struct __CFRunLoopSource { } *ctServerSource;
}

@property (readonly, nonatomic) struct __CTServerConnection { } *connection;
@property (retain) PLAgent *observerAgent;

+ (id)sharedTelephonyConnection;

- (void)enableDiagLogging;
- (id)activeBand;
- (BOOL)requestBasebandStateDump:(id)a0;
- (void)teardownConnection;
- (id)humanReadableCallStatus:(int)a0;
- (id)getProperty:(id)a0 forTrace:(id)a1;
- (void)getSignalStrength:(long long *)a0 asPercentage:(long long *)a1 withBars:(long long *)a2;
- (id)getRemotePortNameWithLocalName:(id)a0;
- (id)humanReadableRATName:(struct __CFString { } *)a0;
- (void)deregisterForAllTelephonyNotifications;
- (id)currentCallStatus;
- (id)init;
- (void)invalidate;
- (BOOL)requestBasebandCoreDump:(id)a0;
- (void)registerCallback:(void /* function */ *)a0 forTelephonyNotification:(struct __CFString { } *)a1;
- (void)getRAT:(id *)a0 preferredRAT:(id *)a1 campedRAT:(id *)a2;
- (void).cxx_destruct;

@end
