@class STContentPrivacyListController;

@interface STContentPrivacyStoreDetailController : STPINListViewController

@property (weak) STContentPrivacyListController *contentPrivacyController;

- (id)init;
- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_isLoadedDidChange:(BOOL)a0;

@end
