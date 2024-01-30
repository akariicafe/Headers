@class NSArray, PXLayoutPerformerOutput;

@interface PXBaseLayoutPerformer : NSObject <PXLayoutPerformer>

@property (nonatomic) struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutRect; BOOL onlyCalculateSize; struct { long long contentSizeCategory; long long layoutDirection; long long layoutSizeClass; long long layoutOrientation; } layoutAttributes; } layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (readonly, nonatomic) NSArray *children;

+ (struct CGSize { double x0; double x1; })performLayoutWithLayoutInput:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; struct { long long x0; long long x1; long long x2; long long x3; } x2; })a0 layoutOutput:(id)a1 usingBlock:(id /* block */)a2;

- (struct CGSize { double x0; double x1; })performLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
