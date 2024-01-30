@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, AMSMultiUserServiceProtocol;

@interface AMSMultiUserService : NSObject <AMSMachService>

@property (class, retain, nonatomic) NSXPCConnection *sharedConnection;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (class, readonly, nonatomic) id<AMSMultiUserServiceProtocol> proxyObject;
@property (class, readonly, nonatomic) id<AMSMultiUserServiceProtocol> proxyObjectAsync;
@property (class, readonly, nonatomic) NSString *machServiceName;
@property (class, readonly, nonatomic) NSXPCInterface *serviceInterface;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createXPCConnection;
+ (BOOL)isConnectionEntitled:(id)a0;


@end
