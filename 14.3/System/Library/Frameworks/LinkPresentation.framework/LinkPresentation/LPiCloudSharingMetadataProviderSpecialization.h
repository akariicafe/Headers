@class NSString, CKContainer;

@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    NSString *_applicationFromURL;
    NSString *_titleFromURL;
    CKContainer *_baseContainer;
    CKContainer *_applicationContainer;
    BOOL _canceled;
}

+ (id)extractApplicationFromURL:(id)a0;
+ (id)extractTitleFromURL:(id)a0;
+ (id)applicationNameMap;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;
+ (unsigned long long)specialization;

- (void)cancel;
- (void)fail;
- (BOOL)canUseCloudKit;
- (id)iconFromShare:(id)a0;
- (id)initWithContext:(id)a0 applicationFromURL:(id)a1 titleFromURL:(id)a2;
- (void)completeUsingApplication:(id)a0 title:(id)a1;
- (void)completeWithShareMetadata:(id)a0 bundleIDs:(id)a1;
- (id)applicationFromBundleIdentifiers:(id)a0 containerIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)start;

@end
