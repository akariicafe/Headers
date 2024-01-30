@class NSDate, NSString, _PXFileBackedAssetMetadata, NSURL, PXFileBackedAssetDescription, CLLocation, NSNumber, NSCache;

@interface PXFileBackedAsset : NSObject <PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset> {
    _PXFileBackedAssetMetadata *_metadata;
    PXFileBackedAssetDescription *_description;
    NSString *_fileBackedUUID;
}

@property (class, readonly, nonatomic) NSCache *_globalCache;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) long long playbackVariation;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long thumbnailVersion;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } positionOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preferredCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } acceptableCropRect;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL cloudIsDeletable;

+ (id)_locationFromImageProperties:(id)a0;
+ (id)_creationDateFromImageProperties:(id)a0;
+ (id)_exifDateFormatter;

@end
