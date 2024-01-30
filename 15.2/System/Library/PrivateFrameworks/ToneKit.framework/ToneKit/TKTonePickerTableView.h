@protocol TKTonePickerTableViewSeparatorObserver, TKTonePickerTableViewLayoutMarginsObserver;

@interface TKTonePickerTableView : UITableView

@property (weak, nonatomic) id<TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver;
@property (weak, nonatomic) id<TKTonePickerTableViewSeparatorObserver> separatorObserver;

- (void)setSeparatorColor:(id)a0;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_handleSeparatorColorDidChange;

@end
