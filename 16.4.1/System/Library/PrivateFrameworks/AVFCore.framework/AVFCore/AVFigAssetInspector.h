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

- (id)commonMetadata;
- (BOOL)isReadable;
- (id)lyrics;
- (long long)trackCount;
- (BOOL)isPlayable;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)metadataForFormat:(id)a0;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isExportable;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)_hasQTSaveRestriction;
- (id)creationDate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (long long)fragmentCount;
- (long long)firstFragmentSequenceNumber;
- (int)naturalTimeScale;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (BOOL)supportsAnalysisReporting;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)containsFragments;
- (id)availableVideoDynamicRanges;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (BOOL)providesPreciseDurationAndTiming;
- (id)_mediaSelectionGroupDictionaries;
- (id)identifyingTagClass;
- (float)preferredRate;
- (id)availableMetadataFormats;
- (id)_nameForProxy;
- (id)propertyListForProxy;
- (void)dealloc;
- (BOOL)canContainFragments;
- (BOOL)isEqual:(id)a0;
- (id)_assetAnalysisMessages;
- (unsigned long long)hash;
- (float)preferredVolume;
- (id)identifyingTag;
- (BOOL)isCompatibleWithAirPlayVideo;
- (id)SHA1Digest;
- (id)alternateTrackGroups;
- (id)preferredDisplayCriteria;
- (id)httpSessionIdentifier;
- (BOOL)isComposable;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (float)preferredSoundCheckVolumeNormalization;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)trackReferences;

@end
