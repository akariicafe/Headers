@class PXWidgetSpec;

@interface PXPhotosDetailsAssetsSpec : PXFeatureSpec

@property (readonly, nonatomic) PXWidgetSpec *_widgetSpec;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentGuideInsets;
@property (readonly, nonatomic) BOOL shouldShowTitle;
@property (readonly, nonatomic) long long editorialNumberOfColumns;
@property (readonly, nonatomic) double editorialInterTileSpacing;
@property (readonly, nonatomic) BOOL enableBadges;
@property (readonly, nonatomic) struct CGSize { double width; double height; } gridInterItemSpacing;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gridContentInsets;
@property (readonly, nonatomic) struct CGSize { double width; double height; } gridItemSize;
@property (readonly, nonatomic) long long gridContentMode;
@property (readonly, nonatomic) unsigned long long detailsOptions;

+ (BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)a0;

- (void)_computeSpecWithExtendedTraitCollection:(id)a0;
- (void)_computeEditorialWithExtendedTraitCollection:(id)a0;
- (void)_computeGridWithExtendedTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 detailsOptions:(unsigned long long)a1;
- (double)defaultCornerRadius;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 detailsOptions:(unsigned long long)a2;

@end
