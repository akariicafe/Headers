@class NSArray, NSString, HUGridLayoutOptions;
@protocol HUPrototypeLayoutOptionsEditorViewControllerDelegate;

@interface HUPrototypeLayoutOptionsEditorViewController : UITableViewController <HUSliderValueTableViewCellDelegate>

@property (retain, nonatomic) NSArray *layoutOptionsKeys;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (weak, nonatomic) id<HUPrototypeLayoutOptionsEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_done:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)sliderValueTableViewCell:(id)a0 didChangeValue:(double)a1;
- (id)_viewSizeSubclassDescription;

@end
