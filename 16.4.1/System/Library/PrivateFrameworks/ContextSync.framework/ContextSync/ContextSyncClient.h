@class NSString, NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface ContextSyncClient : NSObject <ContextSyncClientProtocol>

@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithClientName:(id)a0;
- (BOOL)registerForUpdates:(id)a0 withIdentifier:(id)a1 shouldWake:(BOOL)a2 forDeviceTypes:(long long)a3;
- (BOOL)registerForUpdates:(id)a0 withIdentifier:(id)a1 shouldWake:(BOOL)a2 forDeviceTypes:(long long)a3 withError:(id *)a4;
- (BOOL)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDeviceTypes:(long long)a2;
- (BOOL)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDeviceTypes:(long long)a2 withError:(id *)a3;

@end
