@class UIColor, UIView;

@interface TKPickerDividerTableViewCell : UITableViewCell {
    UIView *_dividerView;
}

@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (nonatomic) long long contentBackdropOverlayBlendMode;

- (void)setSeparatorStyle:(long long)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dividerViewFrame;

@end
