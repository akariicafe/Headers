@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface STDynamicActivityAttributionPublisher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSXPCConnection *serverXPCConnection;
@property (retain, nonatomic) NSString *cachedLocalizedPlistKey;
@property (retain, nonatomic) NSString *cachedAppBundleID;

+ (id)sharedInstance;
+ (void)setCurrentAttributionKey:(id)a0 andApp:(id)a1;

- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (id)init;
- (void).cxx_destruct;
- (void)_tearDownXPCConnection;
- (void)setCurrentAttributionKey:(id)a0 application:(id)a1;
- (void)_internalQueue_sendAttributionKey:(id)a0 andApp:(id)a1;
- (void)_resendAttributionData;

@end
