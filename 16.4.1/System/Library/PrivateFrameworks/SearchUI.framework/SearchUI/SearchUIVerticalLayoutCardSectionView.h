@class SearchUIImageView, NUIContainerBoxView, SearchUILabel, NUIContainerStackView, UIImageView, SFVerticalLayoutCardSection;

@interface SearchUIVerticalLayoutCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) SearchUIImageView *thumbnailView;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *footnoteLabel;
@property (retain, nonatomic) NUIContainerBoxView *thumbnailOverlayContainer;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) SearchUILabel *thumbnailOverlayLabel;
@property (retain, nonatomic) SearchUIImageView *thumbnailOverlayImageView;
@property (retain, nonatomic) SFVerticalLayoutCardSection *section;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)buildThumbnailOverlayContainerIfNecessary;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)updateThumbnailOverlayContainerWithText:(id)a0;

@end
