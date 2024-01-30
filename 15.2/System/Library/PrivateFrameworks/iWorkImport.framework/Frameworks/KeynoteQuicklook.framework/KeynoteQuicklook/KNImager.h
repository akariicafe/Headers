@class KNAbstractSlide, TSUImage, NSString, KNTitlePlaceholderInfo, KNBodyPlaceholderInfo;
@protocol TSDCanvasProxyDelegate;

@interface KNImager : TSDImager <TSDConnectedInfoReplacing>

@property (nonatomic) unsigned long long slideNumber;
@property (weak, nonatomic) KNAbstractSlide *slide;
@property (retain, nonatomic) KNTitlePlaceholderInfo *replacementTitlePlaceholder;
@property (retain, nonatomic) KNBodyPlaceholderInfo *replacementBodyPlaceholder;
@property (nonatomic) struct CGSize { double width; double height; } drawableThumbnailSize;
@property (nonatomic) double drawableThumbnailContentInset;
@property (readonly, nonatomic) TSUImage *drawableThumbnailImage;
@property (nonatomic) BOOL forceOutputSizeToMatchThumbnailSize;
@property (nonatomic) BOOL shouldTintWhiteImages;
@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDocumentRoot:(id)a0;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)a0;
- (BOOL)isInfoAKeynoteTemplateObject:(id)a0;
- (BOOL)p_requiresModifiedStrokeForDrawable:(id)a0 atScaleFactor:(double)a1;
- (double)p_strokeWidthForScaleFactor:(double)a0 drawable:(id)a1;
- (id)p_strokeForShapeInfo:(id)a0;
- (double)p_sizeMultiplierForDrawable:(id)a0;
- (void)p_hideCaptionAndTitleFromDeepCopiedDrawable:(id)a0;
- (void)p_prepareStyledInfoStyle:(id)a0;
- (void)p_prepareShapeInfoStroke:(id)a0 atScaleFactor:(double)a1 finalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

@end
