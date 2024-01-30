@class UIViewController, VUISeparatorView;

@interface VUILibraryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
