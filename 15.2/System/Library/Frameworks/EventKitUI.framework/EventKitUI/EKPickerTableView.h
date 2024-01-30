@class UIDatePicker, UITableView;
@protocol EKPickerTableViewDelegate;

@interface EKPickerTableView : UIView

@property (readonly, nonatomic) UIDatePicker *datePicker;
@property (readonly, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<EKPickerTableViewDelegate> delegate;
@property (nonatomic) BOOL showsDatePicker;
@property (nonatomic) BOOL usesKeyboard;
@property (nonatomic) BOOL usesBlackDatePicker;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_updateTableContentInsetForKeyboard:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (id)inputView;
- (void)dealloc;
- (double)_heightForDatePicker;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tableViewController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForDatePicker;
- (void)_datePickerDoubleTapped:(id)a0;
- (void)setShowsDatePicker:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateTableContentInset;
- (double)heightWithDatePickerAndTableHeight:(double)a0;

@end
