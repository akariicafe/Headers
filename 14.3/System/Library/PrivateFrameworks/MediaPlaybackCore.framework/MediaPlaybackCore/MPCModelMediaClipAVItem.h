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

- (void).cxx_destruct;
- (id)mainTitle;
- (void)loadAssetAndPlayerItem;
- (void)notePlaybackFinishedByHittingEnd;
- (void)setPlaybackFinishedTime:(double)a0;
- (BOOL)isValidPlayerSubstituteForItem:(id)a0;
- (BOOL)isAssetURLValid;
- (BOOL)isStreamable;
- (double)durationFromExternalMetadata;
- (void)reevaluateType;
- (void)_applyLoudnessInfo;
- (BOOL)prefersSeekOverSkip;
- (id)modelGenericObject;
- (BOOL)allowsAirPlayFromCloud;
- (id /* block */)artworkCatalogBlock;
- (BOOL)allowsExternalPlayback;
- (BOOL)_allowsCellularPlayback;
- (id)_currentPreferredStaticAsset;
- (BOOL)_isVideoAsset;
- (id)initWithMediaClip:(id)a0;

@end
