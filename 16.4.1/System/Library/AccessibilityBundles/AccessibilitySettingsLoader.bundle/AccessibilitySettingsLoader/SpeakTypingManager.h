@interface SpeakTypingManager : NSObject

@property (nonatomic, getter=isRegisteredForAppNotifications) BOOL registeredForAppNotifications;

+ (id)sharedInstance;
+ (void)initializeMonitoring;

- (void)updateForCurrentQuickTypeFeedbackStatus;
- (void)_registerForQuickTypePredictionFeedbackAXSettingsUpdate;
- (void)updateForCurrentWordFeedbackStatus;
- (void)_notifyToInitializeServerConnection;
- (void)_registerForWordFeedbackAXSettingsUpdate;
- (void)_registerForPhoneticFeedbackAXSettingsUpdate;
- (void)speakTypingLoadAccessibilityForExistingPredictions;
- (void)_registerForLetterFeedbackAXSettingsUpdate;
- (void)_installSpeakTypingSafeCategoriesIfNeeded;
- (void)updateForCurrentTypingFeedbackStatus;

@end
