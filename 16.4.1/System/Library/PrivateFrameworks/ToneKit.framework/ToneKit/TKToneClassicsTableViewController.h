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

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)initWithClassicTonesHeaderItem:(id)a0;
- (void)didReloadTones;
- (void)didUpdateCheckedStatus:(BOOL)a0 ofToneClassicsPickerItem:(id)a1;
- (void)didUpdateDetailText:(id)a0 ofToneClassicsPickerItem:(id)a1;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)a0;
- (void)separatorColorDidChangeInTonePickerTableView:(id)a0;

@end
