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

- (id)_font;
- (void)_updateLegibilityStrength;
- (double)_lineHeightOfNonLegalLabels;
- (void)layoutSubviews;
- (void)_updateProvisionalEnrollmentLabel;
- (double)_spacingBetweenNonLegalLabels;
- (void)_updateTextViewsIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTextsWithBlock:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateSupervisionLabel;
- (void).cxx_destruct;
- (void)_updateDeviceInformationLabel;
- (void)_updateInternalLegalLabel;
- (id)_largeFont;
- (void)_updateTextViews;
- (double)_nonLegalLabelFontLeading;
- (double)_nonLegalTextParagraphSpacing;

@end
