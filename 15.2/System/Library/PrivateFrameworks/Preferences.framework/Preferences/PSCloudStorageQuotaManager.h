@interface PSCloudStorageQuotaManager : NSObject

+ (id)sharedManager;

- (void)getQuotaInfoForPrimaryAccountCompletion:(id /* block */)a0;

@end
