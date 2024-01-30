@class UITapGestureRecognizer, UIPickerTableView;

@interface UIPickerTableViewCell : UITableViewCell {
    UITapGestureRecognizer *_tap;
}

@property (nonatomic) UIPickerTableView *pickerTable;

+ (id)_centerCellFont;
+ (id)_centerCellDigitFont;
+ (id)_nonCenterCellDigitFont;
+ (id)_nonCenterCellFont;
+ (void)_resetFontCacheForLegitbilityWeight:(long long)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_tapAction:(id)a0;
- (void)_setIsCenterCell:(BOOL)a0 shouldModifyAlphaOfView:(BOOL)a1;
- (void).cxx_destruct;

@end
