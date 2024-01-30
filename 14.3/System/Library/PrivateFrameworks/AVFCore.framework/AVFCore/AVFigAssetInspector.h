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

- (id)identifyingTag;
- (float)preferredVolume;
- (id)lyrics;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (id)identifyingTagClass;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })naturalSize;
- (float)preferredSoundCheckVolumeNormalization;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (id)creationDate;
- (void)dealloc;
- (BOOL)isReadable;
- (long long)fragmentCount;
- (int)naturalTimeScale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (id)alternateTrackGroups;
- (long long)firstFragmentSequenceNumber;
- (id)preferredDisplayCriteria;
- (unsigned long long)hash;
- (BOOL)_hasQTSaveRestriction;
- (BOOL)isComposable;
- (id)availableVideoDynamicRanges;
- (float)preferredRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)isEqual:(id)a0;
- (id)SHA1Digest;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (id)metadataForFormat:(id)a0;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)commonMetadata;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (long long)trackCount;
- (BOOL)isPlayable;
- (BOOL)supportsAnalysisReporting;
- (BOOL)containsFragments;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (id)_assetAnalysisMessages;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (BOOL)providesPreciseDurationAndTiming;
- (id)_mediaSelectionGroupDictionaries;
- (id)propertyListForProxy;
- (id)trackReferences;
- (id)_instanceIdentifier;
- (id)_nameForProxy;

@end
