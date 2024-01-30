@class UIView;

@interface CNMaskingTableView : UITableView

@property (retain, nonatomic) UIView *tableMaskView;
@property (nonatomic) double maskingInset;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void)didMoveToWindow;
- (void).cxx_destruct;

@end
