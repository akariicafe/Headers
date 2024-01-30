@class NSString, UILabel, SBUIPasscodeLockNumberPad;

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate> {
    SBUIPasscodeLockNumberPad *_numberPad;
    BOOL _useLightStyle;
    BOOL _hasPerformedLayoutOnce;
}

@property (retain, nonatomic) NSString *lastCharacterBeforeBackspace;
@property (retain, nonatomic) UILabel *statusTitleView;
@property (retain, nonatomic) UILabel *statusSubtitleView;
@property (nonatomic, getter=_undoInputOnTouchCancellation, setter=_setUndoInputOnTouchCancellation:) BOOL undoInputOnTouchCancellation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateFonts;
- (id)_numberPad;
- (id)init;
- (void)passcodeLockNumberPad:(id)a0 keyDown:(id)a1;
- (void)passcodeLockNumberPad:(id)a0 keyUp:(id)a1;
- (void)_noteKeyUp:(id)a0;
- (void).cxx_destruct;
- (void)passcodeLockNumberPad:(id)a0 keyCancelled:(id)a1;
- (void)passcodeLockNumberPadCancelButtonHit:(id)a0;
- (void)passcodeLockNumberPadBackspaceButtonHit:(id)a0;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(id)a0;
- (void)reset;
- (void)dealloc;
- (id)_newStatusTitleView;
- (id)_newEntryField;
- (void)_setHasInput:(BOOL)a0;
- (void)_layoutEntryField;
- (id)_statusTitleViewTitleFont;
- (id)_statusSubtitleViewTitleFont;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultEntryFieldPosition;
- (void)_noteBackspaceHit;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (double)_offsetForCenteringTitleAndEntryFieldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTopYvalue:(double)a1 bottomYvalue:(double)a2;
- (id)_numericEntryFieldIfExists;
- (void)_noteStringEntered:(id)a0 eligibleForPlayingSounds:(BOOL)a1;
- (BOOL)_includesStatusView;
- (void)setShowsEmergencyCallButton:(BOOL)a0;
- (void)setShowsStatusField:(BOOL)a0;
- (void)willTransitionToPasscodeView;
- (void)updateForTransitionToPasscodeView:(BOOL)a0 animated:(BOOL)a1;
- (void)updateStatusText:(id)a0 subtitle:(id)a1 animated:(BOOL)a2;
- (id)passcode;
- (void)setShowsCancelButton:(BOOL)a0;
- (void)resetForFailedPasscode;
- (void)setKeypadVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (BOOL)_usesLightStyle;
- (id)initWithLightStyle:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_newStatusSubtitleView;
- (void)_toggleForStatusField;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_layoutStatusView;
- (double)_statusTitleWidth;
- (void)passcodeEntryFieldDidAcceptEntry:(id)a0;
- (void)passcodeEntryFieldDidCancelEntry:(id)a0;
- (BOOL)passcodeEntryField:(id)a0 shouldInsertText:(id)a1;
- (void)passcodeEntryFieldTextDidChange:(id)a0;
- (id)_statusTitleView;
- (id)_statusSubtitleView;

@end
