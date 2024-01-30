@class ASDServiceBroker;

@interface ASDInstallAttribution : NSObject {
    ASDServiceBroker *_serviceBroker;
}

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (void).cxx_destruct;
- (void)addInstallAttributionParamsWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithServiceBroker:(id)a0;
- (void)addInstallAttributionParamsWithConfig:(id)a0;

@end
