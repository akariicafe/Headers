@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface STDynamicActivityAttributionPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_serverXPCConnection;
    NSString *_cachedLocalizedPlistKey;
    NSString *_cachedAppBundleID;
}

+ (void)setCurrentAttributionStringWithFormat:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (void)setCurrentAttributionWebsiteString:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (void)setCurrentAttributionKey:(id)a0 andApp:(id)a1;
+ (void)setCurrentAttributionLocalizableKey:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;

- (id)init;
- (void).cxx_destruct;

@end
