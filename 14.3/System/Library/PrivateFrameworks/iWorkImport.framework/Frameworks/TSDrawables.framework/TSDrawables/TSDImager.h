@class TSUColor, NSString, NSArray, NSSet, TSKDocumentRoot, NSObject, NSMapTable, TSDCanvas;
@protocol TSDCanvasProxyDelegate, TSDInfo;

@interface TSDImager : NSObject <TSDDynamicOverridingCanvasDelegate, TSDCanvasDelegate> {
    double mViewScale;
    double mContentsScale;
    struct CGSize { double width; double height; } mScaledImageSize;
    struct CGSize { double width; double height; } mMaximumImagePixelSize;
    BOOL mUseScaledImageSize;
    TSKDocumentRoot *mDocumentRoot;
    BOOL mHasBeenUsed;
    BOOL mDrawingIntoPDF;
    struct CGContext { } *mReusableBitmapContext;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mReusableBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mReusableIntegralBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mReusableActualScaledClipRect;
    struct CGSize { double width; double height; } mReusableScaledImageSize;
    id /* block */ mPostRenderAction;
    NSMapTable *mDynamicOverrides;
    NSObject<TSDInfo> *mInfoToDrawBeneath;
    id /* block */ mInfoToDrawBeneathFilter;
}

@property (copy, nonatomic) NSSet *previousRenderDatasNeedingDownload;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (retain, nonatomic) NSArray *infos;
@property (nonatomic) BOOL mayBeReused;
@property (copy, nonatomic) TSUColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unscaledClipRect;
@property (nonatomic) double viewScale;
@property (nonatomic) double contentsScale;
@property (nonatomic) struct CGSize { double x0; double x1; } scaledImageSize;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumImagePixelSize;
@property (nonatomic) BOOL distortedToMatch;
@property (nonatomic) BOOL imageMustHaveEvenDimensions;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } actualScaledClipRect;
@property (nonatomic) BOOL shouldReuseBitmapContext;
@property (nonatomic) BOOL isPrinting;
@property (nonatomic) BOOL shouldShowInstructionalText;
@property (nonatomic) BOOL imageIsRenderingForMovie;
@property (nonatomic) BOOL shouldSuppressBackgrounds;
@property (nonatomic) BOOL shouldShowComments;
@property (nonatomic) BOOL shouldShowTextCommentHighlights;
@property (nonatomic) BOOL shouldShowCaptionInstructionalText;
@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)documentRoot;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)pngData;
- (id)initWithDocumentRoot:(id)a0;
- (id)pdfData;
- (BOOL)isPrintingCanvas;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleScaledBoundsForClippingRepsOnCanvas:(id)a0;
- (BOOL)isCanvasDrawingIntoPDF:(id)a0;
- (BOOL)p_configureCanvas;
- (struct CGImage { } *)p_newImageInReusableContext;
- (void)p_drawPageInContext:(struct CGContext { } *)a0 createPage:(BOOL)a1;
- (void)setPostRenderAction:(id /* block */)a0;
- (struct CGImage { } *)newImage;
- (BOOL)drawPageInContext:(struct CGContext { } *)a0 createPage:(BOOL)a1;
- (BOOL)shouldShowInstructionalTextForLayout:(id)a0;
- (BOOL)shouldShowCommentsForCanvas:(id)a0;
- (BOOL)shouldShowTextCommentHighlightsForCanvas:(id)a0;
- (id)dynamicOverrideForLayout:(id)a0;
- (id)dynamicOverrideForRep:(id)a0;
- (id)initWithDocumentRoot:(id)a0 renderForWideGamut:(BOOL)a1;
- (void)setInfos:(id)a0 allowLayoutIfNeeded:(BOOL)a1;
- (void)p_assertHasReadLock;
- (struct CGSize { double x0; double x1; })p_evenDimensionsWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setDynamicOverride:(id)a0 forInfo:(id)a1;
- (void)i_setDrawsOnlyBelowInfo:(id)a0;

@end
