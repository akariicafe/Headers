@class UIView, VTUIStyle, NSArray, VTUIPagedLabel, UIButton, VTUICheckMarkView, VTPreferences, UILabel, SUICOrbView;

@interface VTUIProximityEnrollTrainingView : VTUIProximityView {
    VTUIStyle *_vtStyle;
    VTPreferences *_vtPrefs;
}

@property (retain, nonatomic) NSArray *viewConstraints;
@property (retain, nonatomic) UIButton *skipButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) VTUICheckMarkView *checkMark;
@property (retain, nonatomic) VTUIPagedLabel *instructionPagedLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *pageLabel;
@property (retain, nonatomic) SUICOrbView *orbView;
@property (nonatomic) long long enrollmentStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forEnrollmentStyle:(long long)a1;
- (void)_setupConstraintsToSize:(struct CGSize { double x0; double x1; })a0;

@end
