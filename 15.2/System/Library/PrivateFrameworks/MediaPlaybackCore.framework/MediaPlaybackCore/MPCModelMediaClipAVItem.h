@class NSString, MPModelMediaClip, MPModelGenericObject;

@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating> {
    MPModelGenericObject *_modelGenericObject;
}

@property (readonly, nonatomic) MPModelMediaClip *mediaClip;
@property (readonly, nonatomic) id rtcReportingParentHierarchyToken;
@property (readonly, copy, nonatomic) NSString *rtcReportingServiceIdentifier;
@property (readonly, nonatomic) long long rtcReportingAssetType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredMediaClipProperties;

- (id)mainTitle;
- (double)durationFromExternalMetadata;
- (BOOL)prefersSeekOverSkip;
- (void)loadAssetAndPlayerItem;
- (BOOL)isValidPlayerSubstituteForItem:(id)a0;
- (BOOL)isAssetURLValid;
- (void)_applyLoudnessInfo;
- (void)reevaluateType;
- (id /* block */)artworkCatalogBlock;
- (void).cxx_destruct;
- (BOOL)isStreamable;
- (id)modelGenericObject;
- (BOOL)allowsAirPlayFromCloud;
- (BOOL)allowsExternalPlayback;
- (id)initWithMediaClip:(id)a0;
- (BOOL)_allowsCellularPlayback;
- (id)_currentPreferredStaticAsset;
- (BOOL)_isVideoAsset;

@end
