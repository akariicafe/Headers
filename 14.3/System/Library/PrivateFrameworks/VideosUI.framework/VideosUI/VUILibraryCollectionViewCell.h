@class UIViewController, VUISeparatorView;

@interface VUILibraryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
