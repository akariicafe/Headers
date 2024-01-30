@class TSUBezierPath, TSUImage, TSKPencilOverlayAnchorSelectionRectangle, TSPData, TSKPKDrawing;
@protocol TSKPencilAnnotation, TSKPencilAnnotationStorage;

@interface TSKPencilOverlayRenderingDetails : NSObject

@property (retain, nonatomic) id<TSKPencilAnnotationStorage> pencilAnnotationStorage;
@property (readonly, nonatomic) id<TSKPencilAnnotation> pencilAnnotation;
@property (retain, nonatomic) TSUImage *scaledImage;
@property (retain, nonatomic) TSPData *dataToInvalidateFromAfterDownload;
@property (retain, nonatomic) TSKPKDrawing *subDrawing;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unscaledImageClipRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unscaledImageFrame;
@property (retain, nonatomic) TSUBezierPath *transformedPath;
@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) TSKPencilOverlayAnchorSelectionRectangle *unscaledSelectionRectangle;

+ (struct CGColor { } *)fillColorForPenColor:(id)a0;
+ (id)p_baseColorForPenColor:(id)a0;
+ (struct CGColor { } *)strokeColorForPenColor:(id)a0 attachedType:(long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPencilAnnotation:(id)a0 pencilAnnotationStorage:(id)a1;
- (BOOL)containsPointForHitTesting:(struct CGPoint { double x0; double x1; })a0;

@end
