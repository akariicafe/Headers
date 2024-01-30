@class NSString, SBSwitcherModifierStackSnapshot, _SBModifierTimelineTextViewController, UITableView;

@interface _SBModifierTimelineModifierDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    _SBModifierTimelineTextViewController *_textViewController;
}

@property (retain, nonatomic) SBSwitcherModifierStackSnapshot *stackSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
