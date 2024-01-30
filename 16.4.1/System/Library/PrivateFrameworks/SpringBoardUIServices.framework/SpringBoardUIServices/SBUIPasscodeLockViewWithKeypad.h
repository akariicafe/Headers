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

- (void)setShowsCancelButton:(BOOL)a0;
- (void)_updateFonts;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)_usesLightStyle;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)passcode;
- (void).cxx_destruct;
- (void)reset;
- (id)_numberPad;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultEntryFieldPosition;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (BOOL)_includesStatusView;
- (void)_layoutEntryField;
- (void)_layoutStatusView;
- (id)_newEntryField;
- (id)_newStatusSubtitleView;
- (id)_newStatusTitleView;
- (void)_noteBackspaceHit;
- (void)_noteKeyUp:(id)a0;
- (void)_noteStringEntered:(id)a0 eligibleForPlayingSounds:(BOOL)a1;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegatePasscodeEntered;
- (id)_numericEntryFieldIfExists;
- (double)_offsetForCenteringTitleAndEntryFieldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTopYvalue:(double)a1 bottomYvalue:(double)a2;
- (void)_setHasInput:(BOOL)a0;
- (id)_statusSubtitleView;
- (id)_statusSubtitleViewTitleFont;
- (id)_statusTitleView;
- (id)_statusTitleViewTitleFont;
- (double)_statusTitleWidth;
- (void)_toggleForStatusField;
- (id)initWithLightStyle:(BOOL)a0;
- (BOOL)passcodeEntryField:(id)a0 shouldInsertText:(id)a1;
- (void)passcodeEntryFieldDidAcceptEntry:(id)a0;
- (void)passcodeEntryFieldDidCancelEntry:(id)a0;
- (void)passcodeEntryFieldTextDidChange:(id)a0;
- (void)passcodeLockNumberPad:(id)a0 keyCancelled:(id)a1;
- (void)passcodeLockNumberPad:(id)a0 keyDown:(id)a1;
- (void)passcodeLockNumberPad:(id)a0 keyUp:(id)a1;
- (void)passcodeLockNumberPadBackspaceButtonHit:(id)a0;
- (void)passcodeLockNumberPadCancelButtonHit:(id)a0;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(id)a0;
- (void)resetForFailedPasscode;
- (void)setKeypadVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setShowsEmergencyCallButton:(BOOL)a0;
- (void)setShowsStatusField:(BOOL)a0;
- (void)updateForTransitionToPasscodeView:(BOOL)a0 animated:(BOOL)a1;
- (void)updateStatusText:(id)a0 subtitle:(id)a1 animated:(BOOL)a2;
- (void)willTransitionToPasscodeView;

@end
