@class UIColor, UIControl, NSArray, NSString, SBNumberPadWithDelegate, SBUIButton;
@protocol SBUIPasscodeNumberPadButton, SBUIPasscodeLockNumberPadDelegate;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate, CAAnimationDelegate, UIPointerInteractionDelegate> {
    SBNumberPadWithDelegate *_numberPad;
    UIColor *_customBackgroundColor;
    BOOL _useLightStyle;
    BOOL _visible;
    BOOL _snapshotsDisabled;
}

@property (retain, nonatomic) UIControl<SBUIPasscodeNumberPadButton> *downButton;
@property (nonatomic) double ancillaryButtonOffset;
@property (readonly, nonatomic) SBUIButton *emergencyCallButton;
@property (readonly, nonatomic) SBUIButton *backspaceButton;
@property (readonly, nonatomic) SBUIButton *cancelButton;
@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor;
@property (weak, nonatomic) id<SBUIPasscodeLockNumberPadDelegate> delegate;
@property (nonatomic) BOOL showsBackspaceButton;
@property (nonatomic) BOOL showsEmergencyCallButton;
@property (nonatomic) BOOL showsCancelButton;
@property (readonly, weak, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_buttonForCharacter:(long long)a0 withLightStyle:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })_inputButtonCircleSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_inputButtonCircleSpacing;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (void)_configureAdditionalButtons;
- (double)_distanceToTopOfFirstButton;
- (void)_emergencyCallButtonHit;
- (id)_fontForAncillaryButton;
- (void)_numberPadTouchCancelled:(id)a0 forEvent:(id)a1;
- (void)_numberPadTouchDown:(id)a0 forEvent:(id)a1;
- (void)_numberPadTouchDrag:(id)a0 forEvent:(id)a1;
- (void)_numberPadTouchUp:(id)a0 forEvent:(id)a1;
- (void)_setSnapshotsDisabled:(BOOL)a0;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0;

@end
