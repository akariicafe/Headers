@class PXLabelSpec;

@interface PXTitleSubtitleLabelSpec : PXViewSpec

@property (retain, nonatomic) PXLabelSpec *titleLabelSpec;
@property (retain, nonatomic) PXLabelSpec *subtitleLabelSpec;
@property (nonatomic) double interLabelSpacing;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) double maximumTitleSubtitleHeight;

+ (id)memoriesTitleSubtitleSpecForViewSpecDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a0 featureSpec:(id)a1;
+ (id)memoriesTitleSubtitleSpecForTileKind:(long long)a0 featureSpec:(id)a1 boundedByRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)memoriesTitleSubtitleSpecForTileKind:(long long)a0 gadgetSpec:(id)a1 boundedByRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)px_headerTitleSubtitleLabelSpecForZoomLevel:(long long)a0 featureSpec:(id)a1;
+ (id)memoriesTitleSubtitleSpecForTileKind:(long long)a0 viewMode:(id)a1 boundedByRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)_memoriesTitleSubtitleSpecForContext:(struct { long long x0; long long x1; long long x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; BOOL x5; })a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
