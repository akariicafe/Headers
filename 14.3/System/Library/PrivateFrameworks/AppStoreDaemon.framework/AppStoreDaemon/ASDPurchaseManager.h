@class NSString, ASDServiceBroker;

@interface ASDPurchaseManager : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)adopt:(id)a0;
- (id)_initWithServiceBroker:(id)a0;
- (void)adoptionStatus:(BOOL)a0 withReplyHandler:(id /* block */)a1;
- (void)unadoptWithReplyHandler:(id /* block */)a0;
- (id)adoptableBundleIdentifiers;
- (void)processPurchase:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)checkPendingQueue;
- (void)startPurchase:(id)a0 withResultHandler:(id /* block */)a1;
- (void)checkAutomaticDownloadQueue;
- (void)checkPreflightForItemIdentifier:(id)a0 atURL:(id)a1 withReplyHandler:(id /* block */)a2;

@end
