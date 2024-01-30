@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSCommerceService;

@interface AMSCommerceService : NSObject

@property (class, retain, nonatomic) NSXPCConnection *sharedConnection;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (class, readonly, nonatomic) id<AMSCommerceService> proxyObject;
@property (class, readonly, nonatomic) id<AMSCommerceService> proxyObjectAsync;

+ (id)_createXPCConnection;

@end
