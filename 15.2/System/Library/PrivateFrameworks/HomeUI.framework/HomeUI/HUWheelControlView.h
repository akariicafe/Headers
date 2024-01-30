@class NSArray, NSFormatter, NSSet, NSString, UIPickerView;
@protocol HUControlViewDelegate, HUWheelControlViewDelegate;

@interface HUWheelControlView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, HUControlView>

@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) NSArray *wheelValues;
@property (weak, nonatomic) id<HUWheelControlViewDelegate> wheelDelegate;
@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSFormatter *valueFormatter;
@property (retain, nonatomic) NSSet *customValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL canBeHighlighted;

+ (Class)valueClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)_generateWheelValues;
- (id)_formatValue:(id)a0;
- (void)_updateUIToReachable;

@end
