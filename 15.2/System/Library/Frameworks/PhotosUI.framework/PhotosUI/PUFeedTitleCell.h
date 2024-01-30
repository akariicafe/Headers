@class PXSharedAlbumHeaderView, PXFeedSectionInfo;

@interface PUFeedTitleCell : PUFeedCell

@property (readonly, nonatomic) PXSharedAlbumHeaderView *headerView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) long long collectionViewType;
@property (nonatomic) unsigned long long tappableArea;
@property (retain, nonatomic) PXFeedSectionInfo *sectionInfo;

- (void)_handleTap:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateHeaderTextColorStyle;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
