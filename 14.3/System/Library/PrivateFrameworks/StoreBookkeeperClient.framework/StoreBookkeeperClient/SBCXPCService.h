@class SBCXPCServiceInterface, NSXPCConnection, SBCClientConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface SBCXPCService : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCConnection *xpcConnection;
@property (readonly) SBCClientConfiguration *clientConfiguration;
@property (readonly) SBCXPCServiceInterface *XPCServiceInterface;
@property (getter=isConnectionConfigured) BOOL connectionConfigured;

+ (Class)XPCServiceInterfaceClass;
+ (id)newListener;
+ (id)XPCInterfaceDebugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_serverDidLaunch;
- (void)closeServiceConnection;
- (id)initWithClientConfiguration:(id)a0;
- (void)didConnectToService;
- (void)setClientConfiguration:(id)a0;
- (void)_openServiceConnection;
- (id)newServiceConnection;

@end
