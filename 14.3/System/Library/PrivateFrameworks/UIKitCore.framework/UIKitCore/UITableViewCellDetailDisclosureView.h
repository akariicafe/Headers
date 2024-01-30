@class UIButton, UIImageView, UITableViewCell;

@interface UITableViewCellDetailDisclosureView : UIControl {
    UIImageView *_disclosureView;
    UITableViewCell *_cell;
}

@property (readonly, nonatomic) UIButton *accessoryButton;

- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1 cell:(id)a2 buttonType:(long long)a3 shouldReverseLayoutDirection:(BOOL)a4;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)removeTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
