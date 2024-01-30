@protocol SearchUITableViewSizingDelegate;

@interface SearchUITableView : UITableView

@property (weak) id<SearchUITableViewSizingDelegate> sizingDelegate;

- (void)safeAreaInsetsDidChange;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;

@end
