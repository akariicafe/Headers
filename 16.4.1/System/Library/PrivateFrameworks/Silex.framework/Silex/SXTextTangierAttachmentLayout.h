@class TSDWrapPolygon;

@interface SXTextTangierAttachmentLayout : TSDDrawableLayout

@property (retain, nonatomic) TSDWrapPolygon *polygon;

- (void)validate;
- (void).cxx_destruct;
- (void)fixTransformFromInterimPosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (void)storeActualPosition;
- (id)wrapPolygon;

@end
