@class UIColor;

@interface _UITableCellAccessoryButton : UIButton

@property (copy, nonatomic) id /* block */ backgroundImageProvider;
@property (retain, nonatomic) UIColor *accessoryTintColor;

- (id)viewForFirstBaselineLayout;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundImageProvider:(id /* block */)a1;
- (void)_reloadBackgroundImage;
- (void).cxx_destruct;

@end
