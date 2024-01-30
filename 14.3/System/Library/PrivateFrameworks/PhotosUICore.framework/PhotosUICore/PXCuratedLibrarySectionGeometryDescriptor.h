@protocol PXDisplayAsset;

@interface PXCuratedLibrarySectionGeometryDescriptor : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sectionRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyAssetRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headerRect;
@property (readonly, nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } headerCornerRadius;
@property (readonly, nonatomic) id<PXDisplayAsset> headerAsset;
@property (readonly, nonatomic) long long visualPosition;

- (id)init;
- (id)sectionGeometryDescriptorWithHeaderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)sectionGeometryDescriptorWithVisualPosition:(long long)a0;
- (id)sectionGeometryDescriptorWithMaximumHeightBelowHeader:(double)a0;
- (id)sectionGeometryDescriptorOffsetBy:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)hash;
- (id)initWithSectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 headerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 keyAssetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 headerCornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a3 headerAsset:(id)a4 visualPosition:(long long)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })resizeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromGeometryDesciptor:(id)a1 inContainer:(long long)a2 resizing:(unsigned long long)a3;
- (struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })cornerRadiusForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)sectionGeometryDescriptorTransformedBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithSectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 headerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 keyAssetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 headerCornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a3 headerAsset:(id)a4;

@end
