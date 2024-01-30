@class SBSwitcherModifierTimelineEntry, NSString, _SBModifierTimelineModifierDetailViewController, _SBModifierTimelineTextViewController, UITableView;

@interface _SBModifierTimelineDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    _SBModifierTimelineModifierDetailViewController *_modifierDetailViewController;
    _SBModifierTimelineTextViewController *_actionDetailViewController;
}

@property (retain, nonatomic) SBSwitcherModifierTimelineEntry *entry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_done;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)_numberOfModifiersInStackSnapshot:(id)a0;
- (id)_stackSnapshotAtIndex:(long long)a0;

@end
