@interface SpeakTypingManager : NSObject

@property (nonatomic, getter=isRegisteredForAppNotifications) BOOL registeredForAppNotifications;

+ (id)sharedInstance;
+ (void)initializeMonitoring;

- (void)_registerForWordFeedbackAXSettingsUpdate;
- (void)_registerForQuickTypePredictionFeedbackAXSettingsUpdate;
- (void)updateForCurrentTypingFeedbackStatus;
- (void)_registerForLetterFeedbackAXSettingsUpdate;
- (void)_registerForPhoneticFeedbackAXSettingsUpdate;
- (void)_installSpeakTypingSafeCategoriesIfNeeded;
- (void)updateForCurrentQuickTypeFeedbackStatus;
- (void)updateForCurrentWordFeedbackStatus;
- (void)speakTypingLoadAccessibilityForExistingPredictions;

@end
