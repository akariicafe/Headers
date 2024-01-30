@class NSArray, NSString, TSDCanvas, TSKDocumentRoot;

@interface TSDImager : NSObject <TSDCanvasDelegate> {
    double mViewScale;
    struct CGSize { double width; double height; } mScaledImageSize;
    struct CGSize { double width; double height; } mMaximumScaledImageSize;
    BOOL mUseScaledImageSize;
    TSKDocumentRoot *mDocumentRoot;
    BOOL mDrawingIntoPDF;
    struct CGContext { } *mReusableBitmapContext;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mReusableBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mReusableIntegralBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mReusableActualScaledClipRect;
    struct CGSize { double width; double height; } mReusableScaledImageSize;
    id /* block */ mPostRenderAction;
}

@property (retain, nonatomic) NSArray *infos;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unscaledClipRect;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGSize { double x0; double x1; } scaledImageSize;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumScaledImageSize;
@property (nonatomic) BOOL distortedToMatch;
@property (nonatomic) BOOL imageMustHaveEvenDimensions;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } actualScaledClipRect;
@property (nonatomic) BOOL shouldReuseBitmapContext;
@property (nonatomic) BOOL isPrinting;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pdfData;
- (void)dealloc;
- (struct CGImage { } *)newImage;
- (id)documentRoot;
- (BOOL)isPrintingCanvas;
- (void)p_drawPageInContext:(struct CGContext { } *)a0 createPage:(BOOL)a1;
- (BOOL)drawPageInContext:(struct CGContext { } *)a0 createPage:(BOOL)a1;
- (id)initWithDocumentRoot:(id)a0;
- (BOOL)isCanvasDrawingIntoPDF:(id)a0;
- (BOOL)p_configureCanvas;
- (struct CGImage { } *)p_newImageInReusableContext;
- (void)setPostRenderAction:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleScaledBoundsForClippingRepsOnCanvas:(id)a0;

@end
