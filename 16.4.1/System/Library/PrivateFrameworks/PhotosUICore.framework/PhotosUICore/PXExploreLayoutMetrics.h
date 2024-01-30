@class NSString;

@interface PXExploreLayoutMetrics : PXLayoutMetrics <PXGDiagnosticsProvider>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (nonatomic) long long layoutType;
@property (nonatomic) long long layoutSubtype;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long largeHeroDensity;
@property (copy, nonatomic) id /* block */ acceptableLargeHeroPredicate;
@property (nonatomic) BOOL allowHeaders;
@property (nonatomic) BOOL allowSpecialPanoHeaders;
@property (nonatomic) double buildingBlockAspectRatio;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpec:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserInterfaceIdiom:(long long)a0 sizeClass:(long long)a1 orientation:(long long)a2 referenceSize:(struct CGSize { double x0; double x1; })a3 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)a0;
- (void).cxx_destruct;

@end
