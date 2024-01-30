@class UIPrintPageRangeOption, NSArray, NSString, UIView, UIPickerView, UITableView;

@interface UIPrintRangeView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIView *pickerView;
@property (retain, nonatomic) UIPickerView *fromPicker;
@property (retain, nonatomic) UIPickerView *toPicker;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *savedMultiPageRanges;
@property (retain, nonatomic) NSString *multiPageRangeTitle;
@property (nonatomic) double pickerWidth;
@property (retain, nonatomic) UIPrintPageRangeOption *pageRangePrintOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadViews;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)reloadTableView;
- (void)updatePageRangeView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageRangePrintOption:(id)a1;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
