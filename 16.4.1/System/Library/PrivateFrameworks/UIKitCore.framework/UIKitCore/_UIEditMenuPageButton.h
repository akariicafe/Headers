@class NSString, _UIContextMenuSeparatorView, UIVisualEffectView;

@interface _UIEditMenuPageButton : UIButton {
    _UIContextMenuSeparatorView *_separatorView;
    UIVisualEffectView *_backgroundView;
    UIVisualEffectView *_selectedBackgroundView;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _defaultInsets;
}

@property (readonly, nonatomic) long long direction;
@property (retain, nonatomic) NSString *backgroundGroupName;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } arrowEdgeInsets;

- (id)backgroundView;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureButton;
- (id)_imageNameForCurrentDirection;
- (id)initWithDirection:(long long)a0;
- (id)selectedBackgroundView;

@end
