@class NSString;

@interface DMCProfileTableViewController : UITableViewController <PSStateRestoration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)presentViewController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)reloadTableOnContentSizeCategoryChange;
- (void)updateExtendedLayoutIncludesOpaqueBars;
- (void)hideProgressInNavBarShowBackButton:(BOOL)a0;
- (void)showProgressInNavBar;

@end
