@class NSArray, UIAction;
@protocol CKNavBarUnifiedCallButtonDelegate;

@interface CKNavBarUnifiedCallButton : UIButton

@property (nonatomic) long long buttonStyle;
@property (nonatomic, getter=isFaceTimeVideoAvailable) BOOL faceTimeVideoAvailable;
@property (nonatomic, getter=isFaceTimeAudioAvailable) BOOL faceTimeAudioAvailable;
@property (nonatomic, getter=isTelephonyAvailable) BOOL telephonyCallAvailable;
@property (nonatomic) BOOL joinPillShouldDisableLabel;
@property (retain, nonatomic) UIAction *faceTimeVideoAction;
@property (retain, nonatomic) UIAction *faceTimeJoinWithVideoAction;
@property (retain, nonatomic) UIAction *faceTimeAudioAction;
@property (retain, nonatomic) UIAction *faceTimeJoinWithAudioAction;
@property (retain, nonatomic) UIAction *telephonyCallAction;
@property (retain, nonatomic) UIAction *openJoinedCallAction;
@property (weak, nonatomic) id<CKNavBarUnifiedCallButtonDelegate> delegate;
@property (retain, nonatomic) NSArray *overrideAudioCallActions;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)a0;
- (void)updateWithStyle:(long long)a0 availabilityForVideo:(BOOL)a1 audio:(BOOL)a2 telephony:(BOOL)a3;
- (double)_cornerRadiusForCurrentStyle;
- (BOOL)_isStyledForJoinableCall;
- (double)_currentLabelPreferredWidth;
- (void)_updateForCurrentState;
- (void)_configureActionsForCurrentState;
- (id)_axLabelForCurrentStyle;
- (id)_titleForCurrentStyle;
- (id)_targetImageForCurrentFlags;
- (id)_tintColorForCurrentStyle;
- (id)_backgroundColorForCurrentStyle;
- (id)_titleColorForCurrentStyle;
- (id)_titleLabelFontForCurrentStyle;
- (BOOL)_shouldEnableAdjustFontSizeForCurrentStyle;
- (double)_minimumFontScaleFactorForCurrentStyle;
- (id)_startCallActions;
- (void)_configureInsetsForCurrentState;
- (void)_configureFrameForCurrentState;
- (id)_actionsForCurrentStyle;
- (BOOL)_isStyledForJoinedCall;
- (double)_topMarginForCurrentState;
- (double)_leadingMarginForCurrentState;
- (double)_bottomMarginForCurrentState;
- (double)_trailingMarginForCurrentState;
- (id)_joinCallActions;
- (double)_imageToTextSpacingForCurrentState;

@end
