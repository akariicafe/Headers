@class UIViewController, UIView;

@interface _TVStackCollectionViewCell : UICollectionViewCell {
    UIView *_cellContentView;
    long long _pressesEventDepth;
    UIView *_stowedContentView;
}

@property (weak, nonatomic) UIViewController *viewController;

- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_pressesDidEnd;

@end
