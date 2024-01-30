@class UIView, UIPickerView, NSArray, NSString, HUQuickControlWheelPickerViewProfile, UISelectionFeedbackGenerator, UIImpactFeedbackGenerator, NSNumber;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlWheelPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource, HUQuickControlInteractiveView>

@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) UIView *topGradientView;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) UIView *selectedRowSurroundingView;
@property (retain, nonatomic) NSNumber *selectedRow;
@property (nonatomic) double maxTextWidth;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (copy, nonatomic) HUQuickControlWheelPickerViewProfile *profile;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithProfile:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)_updateUI;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)_actuateSelectionTapticFeedback;
- (void)_prepareForTapticFeedback;
- (void)_updateSelectedRowBorderView:(id)a0;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
