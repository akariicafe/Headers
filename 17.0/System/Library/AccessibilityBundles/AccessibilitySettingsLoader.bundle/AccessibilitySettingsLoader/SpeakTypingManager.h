@interface SpeakTypingManager : NSObject

@property (nonatomic, getter=isRegisteredForAppNotifications) BOOL registeredForAppNotifications;

+ (id)sharedInstance;
+ (void)initializeMonitoring;

- (void)_installSpeakTypingSafeCategoriesIfNeeded;
- (void)_registerForQuickTypePredictionFeedbackAXSettingsUpdate;
- (void)_registerForLetterFeedbackAXSettingsUpdate;
- (void)_registerForPhoneticFeedbackAXSettingsUpdate;
- (void)speakTypingLoadAccessibilityForExistingPredictions;
- (void)_notifyToInitializeServerConnection;
- (void)_registerForWordFeedbackAXSettingsUpdate;
- (void)updateForCurrentWordFeedbackStatus;
- (void)updateForCurrentTypingFeedbackStatus;
- (void)updateForCurrentQuickTypeFeedbackStatus;

@end
