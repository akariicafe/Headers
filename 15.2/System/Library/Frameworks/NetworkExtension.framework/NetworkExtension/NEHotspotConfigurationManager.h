@interface NEHotspotConfigurationManager : NSObject

@property (class, readonly) NEHotspotConfigurationManager *sharedManager;

- (id)errorWithCode:(long long)a0;
- (id)serializeConfiguration:(id)a0;
- (void)applyConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeConfigurationForSSID:(id)a0;
- (void)removeConfigurationForHS20DomainName:(id)a0;
- (void)getConfiguredSSIDsWithCompletionHandler:(id /* block */)a0;

@end
