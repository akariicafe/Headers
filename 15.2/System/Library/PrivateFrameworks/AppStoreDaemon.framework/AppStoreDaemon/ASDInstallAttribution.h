@class ASDServiceBroker;

@interface ASDInstallAttribution : NSObject {
    ASDServiceBroker *_serviceBroker;
}

+ (id)sharedInstance;
+ (id)interface;

- (id)_initWithServiceBroker:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startPingbackTaskWithCompletionHandler:(id /* block */)a0;
- (void)addInstallAttributionParamsWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)startImpressionWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)endImpressionWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)addInstallAttributionParamsWithConfig:(id)a0;
- (void)addTestInstallAttributionPingbackWithDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerTestInstallAttributionPingbackForApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateConversionValueForTestInstallAttributionPingbackForApp:(id)a0 conversionValue:(id)a1 completionHandler:(id /* block */)a2;

@end
