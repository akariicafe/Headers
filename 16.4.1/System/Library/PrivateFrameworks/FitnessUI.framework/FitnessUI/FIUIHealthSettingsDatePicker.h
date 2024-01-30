@interface FIUIHealthSettingsDatePicker : UIDatePicker

@property (copy, nonatomic) id /* block */ dateUpdateHandler;

- (void)forceUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_dateDidChange:(id)a0;

@end
