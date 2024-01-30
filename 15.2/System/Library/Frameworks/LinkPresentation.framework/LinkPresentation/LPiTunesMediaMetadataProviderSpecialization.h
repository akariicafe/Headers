@class NSString, LPiTunesMediaLookupTask, LPSpecializationMetadata, MPStoreLyricsSnippetURLComponents, LPFetcherGroup;
@protocol LPiTunesMediaUnresolvedMetadata;

@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    NSString *_identifier;
    NSString *_storefrontCountryCode;
    BOOL _canceled;
    LPiTunesMediaLookupTask *_lookupTask;
    LPSpecializationMetadata *_resolvedMetadata;
    id<LPiTunesMediaUnresolvedMetadata> _unresolvedMetadata;
    MPStoreLyricsSnippetURLComponents *_lyricComponents;
    LPFetcherGroup *_fetcherGroup;
}

+ (unsigned long long)specialization;
+ (long long)determineOrientationOfScreenshotsInArray:(id)a0;
+ (id)assetArrayScreenshotArray:(id)a0;
+ (id)assetArrayFromScreenshotArray:(id)a0;
+ (id)extractOffers:(id)a0;
+ (id)assetArrayFromScreenshotDictionary:(id)a0 usingPreferredPlatformArray:(id)a1;
+ (id)assetFromVideoPreviewDictionary:(id)a0 usingPreferredPlatformArray:(id)a1;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;
+ (id)specializedMetadataProviderForMetadata:(id)a0 withContext:(id)a1;
+ (void)requestSourceApplicationMetadataForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)done;
- (void)resolve;
- (void)fail;
- (void)completed;
- (id)schema;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithLyricComponents:(id)a0 withContext:(id)a1;
- (id)initWithIdentifier:(id)a0 storefrontCountryCode:(id)a1 withContext:(id)a2;
- (id)processResponseDictionary:(id)a0 withStorefrontIdentifier:(id)a1;

@end
