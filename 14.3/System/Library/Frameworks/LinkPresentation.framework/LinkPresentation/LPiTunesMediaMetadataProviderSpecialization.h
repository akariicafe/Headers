@class NSString, LPiTunesMediaLookupTask, LPSpecializationMetadata, LPFetcherGroup;
@protocol LPiTunesMediaUnresolvedMetadata;

@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    NSString *_identifier;
    NSString *_storefrontCountryCode;
    BOOL _canceled;
    LPiTunesMediaLookupTask *_lookupTask;
    LPSpecializationMetadata *_resolvedMetadata;
    id<LPiTunesMediaUnresolvedMetadata> _unresolvedMetadata;
    LPFetcherGroup *_fetcherGroup;
}

+ (long long)determineOrientationOfScreenshotsInArray:(id)a0;
+ (id)assetArrayScreenshotArray:(id)a0;
+ (id)assetArrayFromScreenshotArray:(id)a0;
+ (id)extractOffers:(id)a0;
+ (id)assetArrayFromScreenshotDictionary:(id)a0 usingPreferredPlatformArray:(id)a1;
+ (id)assetFromVideoPreviewDictionary:(id)a0 usingPreferredPlatformArray:(id)a1;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;
+ (id)specializedMetadataProviderForMetadata:(id)a0 withContext:(id)a1;
+ (unsigned long long)specialization;

- (void)cancel;
- (id)schema;
- (void)fail;
- (void).cxx_destruct;
- (void)completed;
- (void)start;
- (id)initWithIdentifier:(id)a0 storefrontCountryCode:(id)a1 withContext:(id)a2;
- (id)processResponseDictionary:(id)a0 withStorefrontIdentifier:(id)a1;
- (void)resolve;
- (void)done;

@end
