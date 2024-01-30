@class NSString, PHAsset, NSDate, NSNumber;
@protocol PXDisplaySuggestion, PXDisplayAsset;

@interface PXForYouSuggestionDisplayAsset : NSObject <PXPhotoKitAdjustedDisplayAsset>

@property (readonly, nonatomic) BOOL shouldInvert;
@property (readonly, nonatomic) id<PXDisplaySuggestion> suggestion;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL isApplied;
@property (readonly, nonatomic) BOOL needsDeferredProcessing;
@property (readonly, nonatomic) BOOL wantsAdjustments;
@property (readonly, nonatomic) NSString *adjustedContentIdentifier;
@property (readonly, nonatomic) PHAsset *photoKitAsset;
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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)inverseSuggestionAsset;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestCropRectForAspectRatio:(double)a0 verticalContentMode:(long long)a1 cropMode:(long long)a2;
- (id)applyAdjustmentsToCompositionController:(id)a0 renderer:(id)a1;
- (long long)isContentEqualTo:(id)a0;
- (id)initWithSuggestion:(id)a0 keyAsset:(id)a1;
- (id)initWithSuggestion:(id)a0 keyAsset:(id)a1 shouldRevert:(BOOL)a2;
- (BOOL)isEqualToSuggestionDisplayAsset:(id)a0;
- (id)_computedPortraitEffectSettingsForCompositionController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestCropRectForAspectRatio:(double)a0;

@end
