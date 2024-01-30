@class UIView;

@interface _UICellViewAccessory : _UICellAccessory

@property (nonatomic) long long options;
@property (retain, nonatomic) UIView *view;

+ (id)accessoryWithIdentifier:(id)a0 view:(id)a1 options:(long long)a2;
+ (id)accessoryWithIdentifier:(id)a0 view:(id)a1 options:(long long)a2 reservedLayoutWidth:(double)a3;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)alwaysNeedsLayout;
- (void)setView:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
