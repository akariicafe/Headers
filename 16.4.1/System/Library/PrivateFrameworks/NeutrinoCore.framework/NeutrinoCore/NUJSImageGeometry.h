@class NUImageGeometry, NUJSScale;

@interface NUJSImageGeometry : NUJSProxy <NUJSImageGeometryExport>

@property (readonly) NUImageGeometry *geometry;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } extent;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (readonly) struct CGSize { double x0; double x1; } scaledSize;
@property (readonly) NUJSScale *scale;
@property (readonly) long long orientation;

- (id)initWithGeometry:(id)a0 context:(id)a1;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
