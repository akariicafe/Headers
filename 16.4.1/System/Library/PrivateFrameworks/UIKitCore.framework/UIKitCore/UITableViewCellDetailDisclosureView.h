@class UIColor, UIImageView, UITableViewCell, UIButton;

@interface UITableViewCellDetailDisclosureView : UIControl {
    UIImageView *_disclosureView;
    UITableViewCell *_cell;
}

@property (readonly, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) UIColor *accessoryTintColor;

- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (void)_updateDisclosureChevronImage;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (id)initWithTarget:(id)a0 action:(SEL)a1 cell:(id)a2 buttonType:(long long)a3 shouldReverseLayoutDirection:(BOOL)a4;
- (void)removeTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;

@end
