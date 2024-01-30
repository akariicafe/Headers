@class NSString, AMSBagKeySet;

@interface AMSFeatureFlagTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cachePath;
+ (id)_cacheDirectory;
+ (BOOL)_cacheResponse:(id)a0 error:(id *)a1;
+ (id)lastFetchedDate;
+ (void)clearCache;
+ (id)createBagForSubProfile;
+ (id)_deviceClass;
+ (void)_handleDeletedITFEsFromResponse:(id)a0;
+ (id)cachedRemoteGroups;

- (id)perform;
- (id)_updateRemoteFeatureFlags;

@end
