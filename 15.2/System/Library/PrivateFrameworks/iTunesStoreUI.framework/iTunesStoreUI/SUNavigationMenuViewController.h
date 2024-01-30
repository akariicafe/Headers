@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController

@property (readonly, nonatomic) SUNavigationMenu *navigationMenu;

- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfMenuItems;
- (id)init;
- (void)_cancelAction:(id)a0;
- (void)dealloc;
- (id)initWithNavigationMenu:(id)a0;
- (id)titleOfMenuItemAtIndex:(long long)a0;
- (void)_protocolButtonAction:(id)a0;

@end
