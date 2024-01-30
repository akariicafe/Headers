@class NSString, ASDServiceBroker;

@interface ASDIAPHistory : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (void)getAllIAPsForActiveAccountWithResultHandler:(id /* block */)a0;
- (void)getIAPsForActiveAccountWithAdamIDs:(id)a0 withResultHandler:(id /* block */)a1;
- (void)refreshIAPsForActiveAccountWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
