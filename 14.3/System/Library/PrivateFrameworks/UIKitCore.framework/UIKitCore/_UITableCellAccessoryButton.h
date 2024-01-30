@interface _UITableCellAccessoryButton : UIButton

@property (copy, nonatomic) id /* block */ backgroundImageProvider;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundImageProvider:(id /* block */)a1;
- (void)_dynamicUserInterfaceTraitDidChange;

@end
