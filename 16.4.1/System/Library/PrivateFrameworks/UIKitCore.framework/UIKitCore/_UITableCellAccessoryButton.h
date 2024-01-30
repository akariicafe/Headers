@class UIColor;

@interface _UITableCellAccessoryButton : UIButton

@property (copy, nonatomic) id /* block */ backgroundImageProvider;
@property (retain, nonatomic) UIColor *accessoryTintColor;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_reloadBackgroundImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundImageProvider:(id /* block */)a1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void).cxx_destruct;

@end
