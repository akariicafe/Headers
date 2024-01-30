@protocol SearchUITableViewSizingDelegate;

@interface SearchUITableView : UITableView

@property (weak) id<SearchUITableViewSizingDelegate> sizingDelegate;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)safeAreaInsetsDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didMoveToWindow;

@end
