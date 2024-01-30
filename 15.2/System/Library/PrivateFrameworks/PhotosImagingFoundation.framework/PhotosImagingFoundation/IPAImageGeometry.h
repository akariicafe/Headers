@class NSString;

@interface IPAImageGeometry : NSObject <IPAQuadGeometry, IPAImageGeometry> {
    NSString *_identifier;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _extent;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _domain;
    struct Quad2d { struct Vector2d { double X; double Y; } V0; struct Vector2d { double X; double Y; } V1; struct Vector2d { double X; double Y; } V2; struct Vector2d { double X; double Y; } V3; } _imageQuad;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inputGeometryWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (void)clearScene:(id)a0;
+ (void)addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withLabel:(id)a1 toScene:(id)a2;
+ (void)addQuadV0:(struct CGPoint { double x0; double x1; })a0 V1:(struct CGPoint { double x0; double x1; })a1 V2:(struct CGPoint { double x0; double x1; })a2 V3:(struct CGPoint { double x0; double x1; })a3 withLabel:(id)a4 toScene:(id)a5;
+ (void)addPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 withLabel:(id)a2 toScene:(id)a3;
+ (void)addLineFromP0:(struct CGPoint { double x0; double x1; })a0 P1:(struct CGPoint { double x0; double x1; })a1 withLabel:(id)a2 toScene:(id)a3;

- (id)identifier;
- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })domain;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extent;
- (id).cxx_construct;
- (struct Quad2d { struct Vector2d { double x0; double x1; } x0; struct Vector2d { double x0; double x1; } x1; struct Vector2d { double x0; double x1; } x2; struct Vector2d { double x0; double x1; } x3; })imageQuad;
- (id)initWithIdentifier:(id)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageQuad:(const struct Quad2d { struct Vector2d { double x0; double x1; } x0; struct Vector2d { double x0; double x1; } x1; struct Vector2d { double x0; double x1; } x2; struct Vector2d { double x0; double x1; } x3; } *)a2;
- (id)initWithIdentifier:(id)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 domain:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithIdentifier:(id)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
