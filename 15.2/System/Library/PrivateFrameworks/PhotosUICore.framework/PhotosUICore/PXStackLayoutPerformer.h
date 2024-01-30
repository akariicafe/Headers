@class NSArray, PXLayoutPerformerOutput;

@interface PXStackLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>

@property (nonatomic) long long layoutAxis;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (retain, nonatomic) NSArray *children;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; struct { long long x0; long long x1; long long x2; long long x3; } x2; } layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;

+ (struct CGSize { double x0; double x1; })performLayoutWithLayoutInput:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; struct { long long x0; long long x1; long long x2; long long x3; } x2; })a0 layoutOutput:(id)a1 usingBlock:(id /* block */)a2;

- (struct CGSize { double x0; double x1; })performLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })_calculateSizeForLayout;
- (void)_performLayoutPass;

@end
