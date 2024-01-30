@class UIViewController, VUISeparatorView;

@interface VUILibraryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
