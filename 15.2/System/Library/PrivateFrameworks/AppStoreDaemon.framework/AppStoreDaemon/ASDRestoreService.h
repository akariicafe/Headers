@class NSString, ASDServiceBroker;

@interface ASDRestoreService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (void).cxx_destruct;
- (id)init;
- (void)estimateTotalDownloadSizeWithCompletionHandler:(id /* block */)a0;

@end
