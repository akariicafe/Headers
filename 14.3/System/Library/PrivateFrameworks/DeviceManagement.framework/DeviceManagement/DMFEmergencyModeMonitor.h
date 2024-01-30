@class NSXPCConnection;

@interface DMFEmergencyModeMonitor : NSObject

@property (class, readonly) DMFEmergencyModeMonitor *sharedMonitor;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)remoteInterface;

- (id)initWithXPCConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)emergencyModeStatusWithError:(id *)a0;
- (void)dealloc;
- (BOOL)disableEmergencyModeWithError:(id *)a0;
- (BOOL)enableEmergencyModeForDuration:(double)a0 withError:(id *)a1;
- (BOOL)enableEmergencyModeWithError:(id *)a0;
- (void)emergencyModeStatusWithCompletionHandler:(id /* block */)a0;

@end
