@class NSString, CKContainer;

@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    NSString *_applicationFromURL;
    NSString *_kindFromURL;
    NSString *_titleFromURL;
    CKContainer *_baseContainer;
    CKContainer *_applicationContainer;
    BOOL _canceled;
}

+ (unsigned long long)specialization;
+ (id)normalizeKind:(id)a0 forApplication:(id)a1;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;

- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)fail;
- (id)applicationFromBundleIdentifiers:(id)a0 containerIdentifier:(id)a1;
- (BOOL)canRetrieveThumbnailForApplication:(id)a0;
- (BOOL)canUseCloudKit;
- (void)completeRetrievingThumbnailForShareMetadata:(id)a0 application:(id)a1 kind:(id)a2 title:(id)a3;
- (void)completeUsingApplication:(id)a0 kind:(id)a1 title:(id)a2 thumbnail:(id)a3;
- (void)completeWithShareMetadata:(id)a0 bundleIDs:(id)a1;
- (id)iconFromShare:(id)a0;
- (id)initWithContext:(id)a0 applicationFromURL:(id)a1 kindFromURL:(id)a2 titleFromURL:(id)a3;

@end
