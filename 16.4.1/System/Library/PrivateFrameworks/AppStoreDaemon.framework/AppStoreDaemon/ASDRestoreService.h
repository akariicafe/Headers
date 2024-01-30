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

- (id)init;
- (void).cxx_destruct;
- (void)clearFollowupsForAccountID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)estimateTotalDownloadSizeWithCompletionHandler:(id /* block */)a0;
- (void)prioritizeBundleIDs:(id)a0 userInitiated:(BOOL)a1 withCompletionHandler:(id /* block */)a2;

@end
