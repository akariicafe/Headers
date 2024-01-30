@class STContentPrivacyListController;

@interface STContentPrivacyStoreDetailController : STPINListViewController

@property (weak) STContentPrivacyListController *contentPrivacyController;

- (void)setCoordinator:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)_isLoadedDidChange:(BOOL)a0;

@end
