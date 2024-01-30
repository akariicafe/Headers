@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface STDynamicActivityAttributionPublisher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSXPCConnection *serverXPCConnection;
@property (retain, nonatomic) NSString *cachedLocalizedPlistKey;
@property (retain, nonatomic) NSString *cachedAppBundleID;

+ (id)sharedInstance;
+ (void)setCurrentAttributionKey:(id)a0 andApp:(id)a1;
+ (void)setCurrentAttributionStringWithFormat:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;

- (void)_resendAttributionData;
- (void)setCurrentAttributionKey:(id)a0 application:(id)a1;
- (void)_tearDownXPCConnection;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void).cxx_destruct;
- (id)init;
- (void)_internalQueue_sendAttributionStringWithFormat:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1;
- (void)setCurrentAttributionStringWithFormat:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1;
- (void)_internalQueue_sendAttributionKey:(id)a0 andApp:(id)a1;

@end
