@class NSDate, NSString, NSNumber, NSData, PHAsset, UIImage, PHMomentShare;

@interface PXCMMPreviewAsset : NSObject <PXDisplayAsset> {
    UIImage *_cachedImage;
}

@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (readonly, nonatomic) PHAsset *underlyingAsset;
@property (readonly, nonatomic) BOOL isPreviewImageDataAvailable;
@property (readonly, nonatomic) NSData *previewImageData;
@property (readonly, nonatomic) UIImage *previewImage;
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

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithMomentShare:(id)a0 underlyingAsset:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestCropRectForAspectRatio:(double)a0 verticalContentMode:(long long)a1 cropMode:(long long)a2;
- (long long)isContentEqualTo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestCropRectForAspectRatio:(double)a0;

@end
