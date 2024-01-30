@class NSString, NSArray, SBUILegibilityLabel, _UILegibilitySettings;

@interface CSStatusTextView : UIView <SBUILegibility> {
    SBUILegibilityLabel *_internalLegalTextLabel;
    SBUILegibilityLabel *_deviceInformationLabel;
    SBUILegibilityLabel *_supervisionLabel;
    SBUILegibilityLabel *_provisionalEnrollmentLabel;
    unsigned long long _transactionCount;
}

@property (copy, nonatomic) NSString *internalLegalText;
@property (copy, nonatomic) NSString *supervisionText;
@property (copy, nonatomic) NSArray *deviceInformationText;
@property (copy, nonatomic) NSString *provisionalEnrollmentText;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_spacingBetweenNonLegalLabels;
- (id)_font;
- (void).cxx_destruct;
- (void)_updateDeviceInformationLabel;
- (void)_updateLegibilityStrength;
- (double)_nonLegalTextParagraphSpacing;
- (void)_updateSupervisionLabel;
- (void)_updateProvisionalEnrollmentLabel;
- (void)layoutSubviews;
- (void)_updateTextViewsIfNecessary;
- (void)_updateTextViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateInternalLegalLabel;
- (void)updateTextsWithBlock:(id /* block */)a0;
- (id)_largeFont;
- (double)_lineHeightOfNonLegalLabels;
- (double)_nonLegalLabelFontLeading;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
