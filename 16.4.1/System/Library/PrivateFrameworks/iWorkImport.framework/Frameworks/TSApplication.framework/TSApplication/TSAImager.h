@class TSUImage;

@interface TSAImager : TSDImager

@property (nonatomic) struct CGSize { double width; double height; } drawableThumbnailSize;
@property (nonatomic) double drawableThumbnailContentInset;
@property (readonly, nonatomic) TSUImage *drawableThumbnailImage;
@property (nonatomic) BOOL forceOutputSizeToMatchThumbnailSize;
@property (nonatomic) BOOL shouldTintWhiteImages;

- (void)p_hideCaptionAndTitleFromDeepCopiedDrawable:(id)a0;
- (BOOL)p_isTextInfo:(id)a0;
- (void)p_prepareShapeInfoStroke:(id)a0 atScaleFactor:(double)a1 finalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)p_prepareStyledInfoStyle:(id)a0;
- (BOOL)p_requiresModifiedStrokeForDrawable:(id)a0 atScaleFactor:(double)a1;
- (double)p_sizeMultiplierForDrawable:(id)a0;
- (id)p_strokeForShapeInfo:(id)a0;
- (double)p_strokeWidthForScaleFactor:(double)a0 drawable:(id)a1;

@end
