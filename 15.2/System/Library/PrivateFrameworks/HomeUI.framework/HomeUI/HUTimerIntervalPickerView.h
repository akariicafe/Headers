@class UILabel, UIPickerView, NSString;
@protocol HUTimerIntervalPickerViewDelegate;

@interface HUTimerIntervalPickerView : UIControl <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain, nonatomic) UIPickerView *timePicker;
@property (retain, nonatomic) UILabel *hoursLabel;
@property (retain, nonatomic) UILabel *minutesLabel;
@property (retain, nonatomic) UILabel *secondsLabel;
@property (weak, nonatomic) id<HUTimerIntervalPickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setDuration:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_updateLabels:(BOOL)a0;
- (id)_hoursStringForHour:(long long)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (double)selectedDuration;
- (void)_fadeLabelForComponent:(long long)a0 toText:(id)a1 animated:(BOOL)a2;
- (id)_minutesStringForMinutes:(long long)a0;
- (id)_secondsStringForSeconds:(long long)a0;
- (id)_labelForComponent:(long long)a0 createIfNecessary:(BOOL)a1;
- (id)_makeNewComponentLabel;
- (void)_positionLabel:(id)a0 forComponent:(long long)a1;
- (void)_setLabel:(id)a0 forComponent:(long long)a1;

@end
