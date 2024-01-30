@class VTUIButton, NSString, NSArray, UIPickerView, UIView, VTUIProximityContainerView, UIButton, UILabel, VTUIStyle;

@interface VTUIProximityEnrollmentLanguageOptionsView : VTUIProximityView <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSArray *_continueButtonsLanguages;
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UILabel *_settingsLabel;
    UIView *_footerView;
    UIView *_languagesView;
    VTUIStyle *_vtStyle;
}

@property (retain, nonatomic) NSArray *viewConstraints;
@property (readonly, nonatomic) UIPickerView *languagesPickerView;
@property (readonly, nonatomic) VTUIButton *continueButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)_setupContent;
- (void)_setupConstraintsToSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 languageOptions:(id)a1;

@end
