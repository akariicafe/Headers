@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController

@property (readonly, nonatomic) SUNavigationMenu *navigationMenu;

- (long long)numberOfMenuItems;
- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cancelAction:(id)a0;
- (id)initWithNavigationMenu:(id)a0;
- (id)titleOfMenuItemAtIndex:(long long)a0;
- (void)_protocolButtonAction:(id)a0;

@end
