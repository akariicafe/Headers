@class _SFSettingsAlertItem, NSArray, _SFSettingsAlertContentController, UINavigationController;

@interface _SFSettingsAlertController : UIViewController {
    UINavigationController *_navigationController;
}

@property (readonly, nonatomic) _SFSettingsAlertContentController *_rootContentController;
@property (readonly, nonatomic) NSArray *items;
@property (nonatomic) long long provenance;
@property (nonatomic) BOOL usesReverseOrder;
@property (retain, nonatomic) _SFSettingsAlertItem *focusedItem;

- (void)addItem:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)pushViewController:(id)a0;
- (void)_pushSubItemsForGroup:(id)a0;
- (void)addDivider;

@end
