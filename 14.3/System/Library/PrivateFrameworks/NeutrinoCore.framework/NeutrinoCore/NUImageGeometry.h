@protocol NUTaggedSpaceMapping;

@interface NUImageGeometry : NSObject <NUTaggedSpaceMapping>

@property (readonly, nonatomic) id<NUTaggedSpaceMapping> spaceMap;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scaledExtent;
@property (readonly, nonatomic) struct { long long x0; long long x1; } scaledSize;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } extent;
@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly, nonatomic) struct { long long numerator; long long denominator; } renderScale;
@property (readonly, nonatomic) long long orientation;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)transformWithSourceSpace:(id)a0 destinationSpace:(id)a1 error:(out id *)a2;
- (id)initWithExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 renderScale:(struct { long long x0; long long x1; })a1;
- (id)initWithExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 renderScale:(struct { long long x0; long long x1; })a1 orientation:(long long)a2;
- (id)initWithExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 renderScale:(struct { long long x0; long long x1; })a1 orientation:(long long)a2 spaceMap:(id)a3;

@end
