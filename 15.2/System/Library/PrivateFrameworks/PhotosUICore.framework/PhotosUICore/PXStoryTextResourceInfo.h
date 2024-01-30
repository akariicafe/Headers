@class NSStringDrawingContext, NSString, NSAttributedString, NSCache;
@protocol PXDisplayAssetCollection;

@interface PXStoryTextResourceInfo : NSObject

@property (class, readonly) NSCache *titleCachedCharacterSetByStyleAndKind;
@property (class, readonly) NSCache *subtitleCachedCharacterSetByKind;

@property (nonatomic) BOOL hasForcedPositioning;
@property (nonatomic) long long forcedPositionIndex;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) long long drawingOptions;
@property (readonly, nonatomic) double boundingRectPadding;
@property (readonly, nonatomic) long long verticalAlignment;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct CGSize { double width; double height; } boundingSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } origin;
@property (readonly, nonatomic) NSStringDrawingContext *drawingContext;
@property (readonly, nonatomic) long long textAlignment;

+ (id)subtitleAttributesForSize:(struct CGSize { double x0; double x1; })a0 string:(id)a1 scale:(double)a2 kind:(unsigned long long)a3 extendedTraitCollectionSnapshot:(id)a4;
+ (void)_increaseMaximumLineHeightToAvoidOverlapForLines:(id)a0 attributes:(id)a1 attributedString:(id *)a2;
+ (id)_titlePrimaryAttributesForStylePairing:(long long)a0 scale:(double)a1 kind:(unsigned long long)a2 allowHyphenation:(BOOL)a3;
+ (id)_rangesAndStylesForTitle:(id)a0;
+ (id)_allowedTitleCharacterSetWithStylePairing:(long long)a0 kind:(unsigned long long)a1;
+ (id)_titleFontCacheKeyForStylePairing:(long long)a0 kind:(unsigned long long)a1;
+ (id)_titleFontDescriptorForStylePairing:(long long)a0 kind:(unsigned long long)a1;
+ (id)_titleFontForStylePairing:(long long)a0 scale:(double)a1 kind:(unsigned long long)a2;
+ (id)_subtitleFontCacheKeyForKind:(unsigned long long)a0;
+ (id)_allowedSubtitleCharacterSetWithKind:(unsigned long long)a0;
+ (id)_subtitleFontForKind:(unsigned long long)a0 scale:(double)a1 hasExtendedCharacterSet:(BOOL)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetCollection:(id)a0 type:(long long)a1;
- (void)_checkForForcedPositioning:(id *)a0;
- (long long)_stylePairingFromTitleCategory:(id)a0 string:(id)a1 kind:(unsigned long long)a2;
- (double)_subtitleLineSpacingForKind:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 extendedTraitCollectionSnapshot:(id)a2 fixedBottomPadding:(double)a3;
- (struct CGSize { double x0; double x1; })_occlusionSizeForSize:(struct CGSize { double x0; double x1; })a0 kind:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 stylePairing:(long long)a3 extendedTraitCollectionSnapshot:(id)a4 fixedBottomPadding:(double)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attributedStringFrameInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titleCategory:(id)a1 displayAsset:(id)a2 currentAssetCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 kind:(unsigned long long)a4 relativeTo:(id)a5 extendedTraitCollectionSnapshot:(id)a6 fixedBottomPadding:(double)a7;
- (double)_sizeWidthMinimumForKind:(unsigned long long)a0 orientationIsLandscape:(BOOL)a1;
- (double)_sizeWidthMaximumForKind:(unsigned long long)a0 orientationIsLandscape:(BOOL)a1;
- (double)_sizeWidthScaleForKind:(unsigned long long)a0 extendedTraitCollectionSnapshot:(id)a1;
- (double)_paddingLeadingMinimumForKind:(unsigned long long)a0 orientationIsLandscape:(BOOL)a1;
- (double)_paddingLeftOrRightAlignmentLeadingScaleForKind:(unsigned long long)a0 orientationIsLandscape:(BOOL)a1;
- (double)_paddingTopMinimumForKind:(unsigned long long)a0;
- (double)_paddingTopScaleForKind:(unsigned long long)a0 extendedTraitCollectionSnapshot:(id)a1;
- (double)_paddingBottomScaleForKind:(unsigned long long)a0 extendedTraitCollectionSnapshot:(id)a1;
- (double)_paddingLeftOrRightAlignmentLeadingForKind:(unsigned long long)a0 extendedTraitCollectionSnapshot:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)_paddingTopForKind:(unsigned long long)a0 extendedTraitCollectionSnapshot:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)_paddingBottomForKind:(unsigned long long)a0 extendedTraitCollectionSnapshot:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 fixedBottomPadding:(double)a3;
- (id)_possibleTitlePositionsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boudingSize:(struct CGSize { double x0; double x1; })a1 occlusionSize:(struct CGSize { double x0; double x1; })a2 kind:(unsigned long long)a3 extendedTraitCollectionSnapshot:(id)a4 fixedBottomPadding:(double)a5;
- (struct CGSize { double x0; double x1; })_availableSizeForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 extendedTraitCollectionSnapshot:(id)a1 kind:(unsigned long long)a2 fixedBottomPadding:(double)a3;
- (struct CGSize { double x0; double x1; })_fullScreenAvailableSizeForExtendedTraitCollectionSnapshot:(id)a0 fixedBottomPadding:(double)a1;
- (long long)_fullScreenTitlePositionWithTitleCategory:(id)a0 displayAsset:(id)a1 currentAssetCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 relativeTo:(id)a3 extendedTraitCollectionSnapshot:(id)a4 fixedBottomPadding:(double)a5;
- (double)_titleScalingFactorForKind:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 extendedTraitCollectionSnapshot:(id)a2 fixedBottomPadding:(double)a3;
- (double)_subtitleScalingFactorForKind:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 extendedTraitCollectionSnapshot:(id)a2 fixedBottomPadding:(double)a3;
- (id)attributedStringBoundingSizeForTitle:(id)a0 stylePairing:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 kind:(unsigned long long)a3 extendedTraitCollectionSnapshot:(id)a4 fixedBottomPadding:(double)a5;
- (id)attributedStringBoundingSizeForSubtitle:(id)a0 size:(struct CGSize { double x0; double x1; })a1 kind:(unsigned long long)a2 extendedTraitCollectionSnapshot:(id)a3 fixedBottomPadding:(double)a4;
- (struct CGPoint { double x0; double x1; })_subtitlePositionInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titleCategory:(id)a1 displayAsset:(id)a2 currentAssetCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 kind:(unsigned long long)a4 relativeTo:(id)a5 extendedTraitCollectionSnapshot:(id)a6 fixedBottomPadding:(double)a7;
- (struct CGPoint { double x0; double x1; })bestPositionInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 occlusionSize:(struct CGSize { double x0; double x1; })a1 possiblePositions:(id)a2 displayAsset:(id)a3 currentAssetCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 layoutOrientation:(long long)a5;
- (BOOL)_isUserInterfaceIdiomPadOrMacOrTV:(id)a0;

@end
