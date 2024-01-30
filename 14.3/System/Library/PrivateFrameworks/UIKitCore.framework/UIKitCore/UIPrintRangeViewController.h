@class UITableView, NSString, NSArray, UIView, UIPickerView, UIPrintPanelViewController;

@interface UIPrintRangeViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIPrintPanelViewController *_printPanelViewController;
    long long _pageCount;
    struct _NSRange { unsigned long long location; unsigned long long length; } _pageRange;
    NSArray *_multiPageRanges;
    NSString *_multiPageRangeTitle;
    UIPickerView *_fromPicker;
    UIPickerView *_toPicker;
    UITableView *_tableView;
    double _pickerWidth;
    UIView *_footerPickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)reloadTableView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithPrintPanelViewController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;

@end
