@class NSXPCConnection;

@interface MIBUClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)_setupConnection;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_isOnLockScreen;
- (void)eapConfigurationWithCompletion:(id /* block */)a0;
- (BOOL)_isActivated:(id *)a0;
- (void)connectToWiFi:(id *)a0;
- (BOOL)isInBoxUpdateMode:(id *)a0;
- (void)stopWiFiMonitor:(id *)a0;
- (void)terminateInBoxUpdateWithCompletion:(id /* block */)a0;

@end
