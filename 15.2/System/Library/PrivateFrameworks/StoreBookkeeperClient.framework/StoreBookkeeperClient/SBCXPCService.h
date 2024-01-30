@class SBCXPCServiceInterface, NSXPCConnection, SBCClientConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface SBCXPCService : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) SBCClientConfiguration *clientConfiguration;
@property (readonly, nonatomic) SBCXPCServiceInterface *XPCServiceInterface;
@property (nonatomic, getter=isConnectionConfigured) BOOL connectionConfigured;

+ (Class)XPCServiceInterfaceClass;
+ (id)XPCInterfaceDebugDescription;
+ (id)newListener;

- (void)setClientConfiguration:(id)a0;
- (void)closeServiceConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didConnectToService;
- (id)initWithClientConfiguration:(id)a0;
- (id)newServiceConnection;
- (void)_openServiceConnection;
- (void)_serverDidLaunch;

@end
