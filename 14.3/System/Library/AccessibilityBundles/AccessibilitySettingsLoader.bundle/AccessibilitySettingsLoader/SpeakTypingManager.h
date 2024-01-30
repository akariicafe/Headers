@interface SpeakTypingManager : NSObject

@property (nonatomic, getter=isRegisteredForAppNotifications) BOOL registeredForAppNotifications;

+ (id)sharedInstance;
+ (void)initializeMonitoring;

- (void)_registerForQuickTypePredictionFeedbackAXSettingsUpdate;
- (void)_registerForPhoneticFeedbackAXSettingsUpdate;
- (void)updateForCurrentQuickTypeFeedbackStatus;
- (void)_registerForLetterFeedbackAXSettingsUpdate;
- (void)updateForCurrentTypingFeedbackStatus;
- (void)_registerForWordFeedbackAXSettingsUpdate;
- (void)_installSpeakTypingSafeCategoriesIfNeeded;
- (void)updateForCurrentWordFeedbackStatus;

@end
