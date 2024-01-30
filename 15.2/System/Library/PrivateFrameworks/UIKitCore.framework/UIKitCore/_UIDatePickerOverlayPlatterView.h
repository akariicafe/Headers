@class UIVisualEffectView, _UIRoundedRectShadowView, UIView, NSLayoutConstraint, UIDatePicker;

@interface _UIDatePickerOverlayPlatterView : UIView

@property (readonly, nonatomic) _UIRoundedRectShadowView *shadowView;
@property (readonly, nonatomic) UIVisualEffectView *backgroundView;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) UIView *previousContentView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) NSLayoutConstraint *contentWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (readonly, nonatomic) UIDatePicker *datePicker;
@property (nonatomic) BOOL accessoryViewIgnoresDefaultInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;

- (void)layoutSubviews;
- (void)replaceDatePicker:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)initWithDatePicker:(id)a0 accessoryView:(id)a1;
- (void)datePickerTransitionCompletion;
- (void)prepareDatePickerTransitionWithDatePicker:(id)a0;
- (void)datePickerTransitionAnimation;
- (struct CGSize { double x0; double x1; })preferredPlatterSize;

@end
