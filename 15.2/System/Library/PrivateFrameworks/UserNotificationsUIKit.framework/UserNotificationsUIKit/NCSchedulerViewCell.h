@class UIView, NCSymbolButton, UILabel, UIDatePicker, NSLayoutConstraint;
@protocol NCSchedulerViewCellDelegate;

@interface NCSchedulerViewCell : UICollectionViewCell {
    NCSymbolButton *_button;
    UILabel *_label;
    UIDatePicker *_datePicker;
    NSLayoutConstraint *_backgroundViewTopConstraint;
    NSLayoutConstraint *_backgroundViewBottomConstraint;
    NSLayoutConstraint *_labelLeadingConstraint;
    NSLayoutConstraint *_labelTrailingConstraint;
    UIView *_topCornersView;
    UIView *_backgroundView;
    UIView *_bottomCornersView;
    UIView *_bottomLineView;
}

@property (weak, nonatomic) id<NCSchedulerViewCellDelegate> delegate;

+ (id)_font;
+ (id)reuseIdentifier;
+ (id)_drawingContext;
+ (double)preferredHeightForText:(id)a0 width:(double)a1;
+ (double)_widthForHour:(unsigned long long)a0;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureWithSymbolName:(id)a0 symbolColor:(id)a1 title:(id)a2 timeOfDay:(id)a3 delegate:(id)a4 top:(BOOL)a5 bottom:(BOOL)a6;
- (void)_timeChanged:(id)a0;
- (double)_buttonSymbolSize;

@end
