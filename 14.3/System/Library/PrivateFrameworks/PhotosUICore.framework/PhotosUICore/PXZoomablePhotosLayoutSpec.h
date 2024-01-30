@class NSArray, PXZoomableInlineHeadersLayoutSpec;

@interface PXZoomablePhotosLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) long long defaultNumberOfColumns;
@property (readonly, nonatomic) long long initialNumberOfColumns;
@property (readonly, nonatomic) long long staticNumberOfColumns;
@property (readonly, nonatomic) long long maxColumnsForIndividualItems;
@property (readonly, nonatomic) long long maxColumnsForBadges;
@property (readonly, nonatomic) double interitemSpacing;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } aspectFitEdgeMargins;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } squareEdgeMargins;
@property (readonly, nonatomic) double aspectFitInteritemSpacing;
@property (readonly, nonatomic) double panoramaItemAspectRatio;
@property (readonly, nonatomic) double panoramaInteritemSpacing;
@property (readonly, nonatomic) BOOL useSaliency;
@property (readonly, nonatomic) long long maxColumnsForSaliency;
@property (readonly, nonatomic) NSArray *supportedColumns;
@property (readonly, nonatomic) NSArray *minimumAssetsRequiredByColumn;
@property (readonly, nonatomic) NSArray *legacyMacSupportedColumns;
@property (readonly, nonatomic) double captionSpacing;
@property (readonly, nonatomic) PXZoomableInlineHeadersLayoutSpec *inlineHeadersSpec;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (long long)bestColumnIndexForPreferredNumberOfColumns:(long long)a0 allowedColumns:(id)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 availableThumbnailSizes:(id)a2 userDefaults:(id)a3;

@end
