@class NSString, _TtC24KeyboardSettingsFeedback26TUIFeedbackSurveyPresenter, NSArray;

@interface TUIFeedbackController : NSObject

@property (readonly, nonatomic) NSString *feedbackFeatureEnabledKey;
@property (readonly, nonatomic) NSString *stateKey;
@property (readonly, nonatomic) NSString *initialPreferenceValueKey;
@property (readonly, nonatomic) NSString *initialInputModesKey;
@property (readonly, nonatomic) NSString *initialTimestampKey;
@property (readonly, nonatomic) NSString *finalPreferenceValueKey;
@property (readonly, nonatomic) NSString *finalInputModesKey;
@property (readonly, nonatomic) NSString *finalTimestampKey;
@property (readonly, nonatomic) NSString *surveyOutcomeKey;
@property (readonly, nonatomic) _TtC24KeyboardSettingsFeedback26TUIFeedbackSurveyPresenter *feedbackSurveyPresenter;
@property (readonly, nonatomic) NSString *preferenceKey;
@property (readonly, nonatomic) NSArray *supportedLanguages;

+ (id)controllerWithPreferenceKey:(id)a0 supportedLanguages:(id)a1;

- (id)build;
- (id)model;
- (void).cxx_destruct;
- (BOOL)isEligibleDevice;
- (id)finalInputModes;
- (id)currentInputModes;
- (BOOL)feedbackFeatureEnabled;
- (BOOL)finalPreferenceValue;
- (id)finalTimestamp;
- (id)initWithPreferenceKey:(id)a0 supportedLanguages:(id)a1;
- (id)initialInputModes;
- (BOOL)initialPreferenceValue;
- (id)initialTimestamp;
- (void)completeStudyWithFinalPreferenceValue:(BOOL)a0 parentController:(id)a1;
- (BOOL)shouldCompleteStudyWithPreferenceValue:(BOOL)a0;
- (void)_presentSurveyWithParentController:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateStudyDataWithFinalPreferenceValue:(BOOL)a0 finalTimestamp:(id)a1;
- (void)_updateStudyDataWithSurveyOutcome:(long long)a0 surveyError:(id)a1 initialState:(long long)a2;
- (id)computeSurveyMetadata;

@end
