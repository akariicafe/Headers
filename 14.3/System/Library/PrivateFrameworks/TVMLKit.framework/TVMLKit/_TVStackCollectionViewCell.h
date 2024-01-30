@class UIViewController, UIView;

@interface _TVStackCollectionViewCell : UICollectionViewCell {
    UIView *_cellContentView;
}

@property (weak, nonatomic) UIViewController *viewController;

- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
