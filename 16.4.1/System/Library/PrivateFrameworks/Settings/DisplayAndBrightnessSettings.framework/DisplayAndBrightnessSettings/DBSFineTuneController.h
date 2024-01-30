@class PSSpecifier, NSNumberFormatter, NSNumber, CADisplayPreset;

@interface DBSFineTuneController : PSListController {
    NSNumberFormatter *_xyNumberFormatter;
    NSNumberFormatter *_luminanceNumberFormatter;
    NSNumber *_measuredWhitePointX;
    NSNumber *_measuredWhitePointY;
    NSNumber *_measuredLuminance;
    NSNumber *_targetWhitePointX;
    NSNumber *_targetWhitePointY;
    NSNumber *_targetLuminance;
    CADisplayPreset *_currentPreset;
    PSSpecifier *_measuredWhitePointXSpecifier;
    PSSpecifier *_measuredWhitePointYSpecifier;
    PSSpecifier *_measuredLuminanceSpecifier;
    PSSpecifier *_targetWhitePointXSpecifier;
    PSSpecifier *_targetWhitePointYSpecifier;
    PSSpecifier *_targetLuminanceSpecifier;
    PSSpecifier *_restoreDefaultsSpecifier;
}

- (void)viewDidLoad;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)userDidTapDone:(id)a0;
- (id)getMeasuredLuminance:(id)a0;
- (id)getMeasuredWhitePointX:(id)a0;
- (id)getMeasuredWhitePointY:(id)a0;
- (id)getTargetLuminance:(id)a0;
- (id)getTargetWhitePointX:(id)a0;
- (id)getTargetWhitePointY:(id)a0;
- (void)restoreDefaults:(id)a0;
- (void)setMeasuredLuminance:(id)a0 forSpecifier:(id)a1;
- (void)setMeasuredWhitePointX:(id)a0 forSpecifier:(id)a1;
- (void)setMeasuredWhitePointY:(id)a0 forSpecifier:(id)a1;
- (void)setTargetLuminance:(id)a0 forSpecifier:(id)a1;
- (void)setTargetWhitePointX:(id)a0 forSpecifier:(id)a1;
- (void)setTargetWhitePointY:(id)a0 forSpecifier:(id)a1;
- (void)updateTargetLuminanceValidationRange;
- (void)updateValidationRanges;
- (void)userDidTapCancel:(id)a0;
- (void)validateUserAdjustment;

@end
