@interface _UICellSpacingAccessory : _UICellAccessory

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

+ (id)accessoryWithIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)view;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;

@end
