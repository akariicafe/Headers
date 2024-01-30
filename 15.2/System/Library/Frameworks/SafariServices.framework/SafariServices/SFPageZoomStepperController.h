@class NSString, NSNumberFormatter, WBSPageZoomPreferenceManager;
@protocol _SFSettingsAlertStepperConfiguration, _SFBrowserDocument;

@interface SFPageZoomStepperController : NSObject <_SFSettingsAlertStepperController> {
    WBSPageZoomPreferenceManager *_preferenceManager;
    id<_SFBrowserDocument> _tab;
    NSNumberFormatter *_percentFormatter;
    id<_SFSettingsAlertStepperConfiguration> _stepper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_pageZoomChanged:(id)a0;
- (void)_updateButtonsEnabledWithZoomFactor:(double)a0;
- (void)_updateButtonsEnabledOnMainQueueWithZoomFactor:(double)a0;
- (void)prepareStepper:(id)a0;
- (void)incrementValue:(id)a0;
- (void)decrementValue:(id)a0;
- (void)resetValue:(id)a0;
- (id)longestTextForButton:(long long)a0;
- (id)initWithDocument:(id)a0 preferenceManager:(id)a1;

@end
