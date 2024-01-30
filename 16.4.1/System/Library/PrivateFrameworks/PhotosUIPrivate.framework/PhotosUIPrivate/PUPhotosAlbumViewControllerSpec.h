@interface PUPhotosAlbumViewControllerSpec : PULegacyViewControllerSpec

@property (readonly, nonatomic) BOOL shouldUseAspectItems;
@property (readonly, nonatomic) double contentCornerRadius;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } fullMomentsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) long long fullMomentsSectionHeaderStyle;

+ (id)padSpec;
+ (id)phoneSpec;

- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)a0;
- (id)gridSpec;

@end
