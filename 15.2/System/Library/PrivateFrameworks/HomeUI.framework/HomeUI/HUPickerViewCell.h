@class NSString, HFItem, UIPickerView, NSIndexPath;
@protocol HUResizableCellDelegate, HUPickerCellDelegate;

@interface HUPickerViewCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource, HUCellProtocol>

@property (retain, nonatomic) UIPickerView *pickerView;
@property (nonatomic) long long numberOfValues;
@property (weak, nonatomic) id<HUPickerCellDelegate> delegate;
@property (readonly, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)reloadPickerView;
- (void)updateUIWithAnimation:(BOOL)a0;
- (BOOL)_canSelectValueAtIndex:(long long)a0;
- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1;

@end
