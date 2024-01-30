@class UITapGestureRecognizer, UIPickerTableView;

@interface UIPickerTableViewCell : UITableViewCell {
    UITapGestureRecognizer *_tap;
}

@property (nonatomic) UIPickerTableView *pickerTable;

+ (id)_centerCellFont;
+ (id)_nonCenterCellFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_setIsCenterCell:(BOOL)a0 shouldModifyAlphaOfView:(BOOL)a1;
- (void)_tapAction:(id)a0;

@end
