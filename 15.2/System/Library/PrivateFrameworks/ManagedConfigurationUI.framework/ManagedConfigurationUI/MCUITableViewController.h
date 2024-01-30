@class NSString;

@interface MCUITableViewController : UITableViewController <PSStateRestoration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)updateExtendedLayoutIncludesOpaqueBars;
- (void)reloadTableOnContentSizeCategoryChange;

@end
