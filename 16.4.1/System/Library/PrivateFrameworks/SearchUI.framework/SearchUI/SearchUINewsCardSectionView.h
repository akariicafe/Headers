@class NUIContainerStackView, SearchUILabel, SearchUIImageView;

@interface SearchUINewsCardSectionView : SearchUICardSectionView

@property (retain) NUIContainerStackView *contentView;
@property (retain) SearchUIImageView *thumbnailImageView;
@property (retain) SearchUIImageView *providerImageView;
@property (retain) SearchUILabel *providerLabel;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;
- (double)minThumbnailBottomSpacing;
- (double)providerImageVerticalOffset;
- (double)providerImageVerticalSizeDelta;

@end
