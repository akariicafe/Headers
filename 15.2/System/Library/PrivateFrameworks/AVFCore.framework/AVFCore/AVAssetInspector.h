@class AVMetadataItem, NSArray, NSDictionary, NSString, NSData, AVDisplayCriteria;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) float preferredRate;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) float preferredSoundCheckVolumeNormalization;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minimumTimeOffsetFromLive;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) int naturalTimeScale;
@property (readonly, nonatomic) BOOL providesPreciseDurationAndTiming;
@property (readonly, nonatomic) long long trackCount;
@property (readonly, nonatomic) NSArray *trackIDs;
@property (readonly, nonatomic) NSArray *alternateTrackGroups;
@property (readonly, nonatomic) NSDictionary *trackReferences;
@property (readonly, nonatomic, getter=_mediaSelectionGroupDictionaries) NSArray *mediaSelectionGroupDictionaries;
@property (readonly, nonatomic) AVMetadataItem *creationDate;
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic, getter=isExportable) BOOL exportable;
@property (readonly, nonatomic, getter=isReadable) BOOL readable;
@property (readonly, nonatomic, getter=isComposable) BOOL composable;
@property (readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;
@property (readonly, nonatomic, getter=isCompatibleWithAirPlayVideo) BOOL compatibleWithAirPlayVideo;
@property (readonly, nonatomic) NSData *SHA1Digest;
@property (readonly, nonatomic) BOOL canContainFragments;
@property (readonly, nonatomic) BOOL containsFragments;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } overallDurationHint;
@property (readonly, nonatomic) long long firstFragmentSequenceNumber;
@property (readonly, nonatomic) long long fragmentCount;
@property (readonly, nonatomic) id propertyListForProxy;
@property (readonly, nonatomic) NSString *identifyingTagClass;
@property (readonly, nonatomic) NSString *identifyingTag;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumVideoResolution;
@property (readonly, nonatomic) NSArray *availableVideoDynamicRanges;
@property (readonly, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (readonly, nonatomic, getter=_instanceIdentifier) NSString *instanceIdentifier;
@property (readonly, nonatomic) BOOL supportsAnalysisReporting;
@property (readonly, nonatomic, getter=_assetAnalysisMessages) NSArray *assetAnalysisMessages;

- (BOOL)hasProtectedContent;
- (id)metadataForFormat:(id)a0;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
