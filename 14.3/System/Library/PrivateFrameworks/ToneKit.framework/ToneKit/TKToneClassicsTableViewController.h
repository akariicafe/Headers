@class NSString, TKTonePickerItem;
@protocol TKTonePickerTableViewControllerHelper;

@interface TKToneClassicsTableViewController : UITableViewController <PSStateRestoration, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver> {
    TKTonePickerItem *_classicTonesHeaderItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TKTonePickerTableViewControllerHelper> tonePickerTableViewControllerHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)a0;
- (void)separatorColorDidChangeInTonePickerTableView:(id)a0;
- (void)didReloadTones;
- (void)didUpdateCheckedStatus:(BOOL)a0 ofToneClassicsPickerItem:(id)a1;
- (void)didUpdateDetailText:(id)a0 ofToneClassicsPickerItem:(id)a1;
- (id)initWithClassicTonesHeaderItem:(id)a0;

@end
