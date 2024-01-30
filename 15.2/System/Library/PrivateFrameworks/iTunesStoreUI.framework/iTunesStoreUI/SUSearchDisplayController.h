@interface SUSearchDisplayController : UISearchDisplayController {
    BOOL _store_navigationBarHidingEnabled;
}

- (BOOL)isNavigationBarHidingEnabled;
- (id)_createPopoverController;
- (void)setNavigationBarHidingEnabled:(BOOL)a0;
- (void)_updateSearchBarMaskIfNecessary;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (void)_noEventSetSearchFieldText:(id)a0;

@end
