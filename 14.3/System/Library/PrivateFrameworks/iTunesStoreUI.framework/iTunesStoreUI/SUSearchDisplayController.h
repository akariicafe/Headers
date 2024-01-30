@interface SUSearchDisplayController : UISearchDisplayController {
    BOOL _store_navigationBarHidingEnabled;
}

- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (id)_createPopoverController;
- (BOOL)isNavigationBarHidingEnabled;
- (void)setNavigationBarHidingEnabled:(BOOL)a0;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_noEventSetSearchFieldText:(id)a0;

@end
