@class NSString, _UIBackdropView, NSArray, UIView, UIPickerView;
@protocol SKUIPickerViewDelegate;

@interface SKUIPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    _UIBackdropView *_backdropView;
    UIPickerView *_pickerView;
    UIView *_separatorView;
    NSArray *_titles;
}

@property (weak, nonatomic) id<SKUIPickerViewDelegate> delegate;
@property (nonatomic) long long selectedItemIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)initWithTitles:(id)a0;

@end
