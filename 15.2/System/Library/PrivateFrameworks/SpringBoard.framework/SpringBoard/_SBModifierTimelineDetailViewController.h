@class SBSwitcherModifierTimelineEntry, NSString, _SBModifierTimelineModifierDetailViewController, _SBModifierTimelineTextViewController, UITableView;

@interface _SBModifierTimelineDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    _SBModifierTimelineModifierDetailViewController *_modifierDetailViewController;
    _SBModifierTimelineTextViewController *_textDetailViewController;
}

@property (retain, nonatomic) SBSwitcherModifierTimelineEntry *entry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_done;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)_numberOfModifiersInStackSnapshot:(id)a0;
- (id)_stackSnapshotAtIndex:(long long)a0;
- (id)_prettyStringForEventPredicateDetails:(id)a0;

@end
