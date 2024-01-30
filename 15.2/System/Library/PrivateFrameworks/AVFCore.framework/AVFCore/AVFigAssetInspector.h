@class NSArray, AVDispatchOnce, NSURL, AVDisplayCriteria;

@interface AVFigAssetInspector : AVAssetInspector {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigFormatReader { } *_formatReader;
    AVDispatchOnce *_formatReaderOnce;
    AVDispatchOnce *_checkIsStreamingOnce;
    AVDispatchOnce *_makeDisplayCriteriaOnce;
    AVDisplayCriteria *_displayCriteria;
    BOOL _isStreaming;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset { } *figAsset;
@property (readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader { } *formatReader;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic, getter=_isStreaming) BOOL streaming;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;

- (id)lyrics;
- (long long)fragmentCount;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)trackReferences;
- (long long)trackCount;
- (float)preferredVolume;
- (id)_instanceIdentifier;
- (BOOL)isPlayable;
- (BOOL)providesPreciseDurationAndTiming;
- (BOOL)isExportable;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (BOOL)isReadable;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)preferredDisplayCriteria;
- (id)_mediaSelectionGroupDictionaries;
- (id)availableVideoDynamicRanges;
- (BOOL)canContainFragments;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)creationDate;
- (float)preferredRate;
- (id)metadataForFormat:(id)a0;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (id)availableMetadataFormats;
- (id)alternateTrackGroups;
- (id)identifyingTag;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)commonMetadata;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (float)preferredSoundCheckVolumeNormalization;
- (BOOL)supportsAnalysisReporting;
- (long long)firstFragmentSequenceNumber;
- (BOOL)_hasQTSaveRestriction;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_assetAnalysisMessages;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isCompatibleWithAirPlayVideo;
- (int)naturalTimeScale;
- (id)propertyListForProxy;
- (id)identifyingTagClass;
- (id)_nameForProxy;
- (id)SHA1Digest;
- (BOOL)containsFragments;

@end
