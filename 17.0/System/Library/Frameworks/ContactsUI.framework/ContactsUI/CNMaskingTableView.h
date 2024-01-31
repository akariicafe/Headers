@class UIView;

@interface CNMaskingTableView : UITableView

@property (retain, nonatomic) UIView *tableMaskView;
@property (nonatomic) double maskingInset;

- (void)tlk_updateForAppearance:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
