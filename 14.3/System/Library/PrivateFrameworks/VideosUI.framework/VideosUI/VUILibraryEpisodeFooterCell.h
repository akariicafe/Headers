@class NSString, VUILegacyButton, NSNumber, VUISeparatorView;
@protocol VUILibraryEpisodeFooterCellDelegate;

@interface VUILibraryEpisodeFooterCell : UICollectionViewCell

@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;
@property (retain, nonatomic) VUILegacyButton *titleButton;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *storeID;
@property (weak, nonatomic) id<VUILibraryEpisodeFooterCellDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
