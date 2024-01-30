@class NSString;

@interface DBSDisplayZoomSelectionListController : PSListController <DBSDisplayZoomTableViewCellDelegate>

@property (nonatomic) unsigned long long selectedDisplayZoomOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (unsigned long long)displayZoomTableViewCellCurrentlySelectedDisplayZoomOption:(id)a0;
- (void)displayZoomTableViewCell:(id)a0 userDidTapOnDisplayZoomOption:(unsigned long long)a1;
- (void)userDidTapSet:(id)a0;
- (void)userDidTapCancel:(id)a0;
- (void)_updateNavigationButtonStateWithNewOption:(unsigned long long)a0;
- (void)_userDidConfirmDisplayZoomModeWithSpecifier:(id)a0;

@end
