@class TSDWrapPolygon;

@interface SXTextTangierAttachmentLayout : TSDDrawableLayout

@property (retain, nonatomic) TSDWrapPolygon *polygon;

- (void)validate;
- (void).cxx_destruct;
- (id)wrapPolygon;
- (void)fixTransformFromInterimPosition;
- (void)storeActualPosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;

@end
