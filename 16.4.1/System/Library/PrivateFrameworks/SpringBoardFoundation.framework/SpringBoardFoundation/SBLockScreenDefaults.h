@class NSDictionary;

@interface SBLockScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL limitFeaturesForRemoteLock;
@property (readonly, nonatomic) BOOL showLegalText;
@property (nonatomic) BOOL showAuthenticationEngineeringUI;
@property (nonatomic) BOOL showSupervisionText;
@property (nonatomic) BOOL showQuickNoteFingerGestureRecognizer;
@property (nonatomic) BOOL forceWakeToMaps;
@property (nonatomic) double nowPlayingTimeout;
@property (nonatomic) BOOL weDontNeedNoEducation;
@property (nonatomic) BOOL useDefaultsValuesForCameraPrewarm;
@property (nonatomic) BOOL prewarmCameraOnSwipe;
@property (nonatomic) double cameraSwipePrewarmThreshold;
@property (nonatomic) BOOL prelaunchCameraOnSwipe;
@property (nonatomic) double cameraSwipePrelaunchThreshold;
@property (nonatomic) BOOL prewarmCameraOnButtonTouch;
@property (nonatomic) BOOL prelaunchCameraOnButtonTouch;
@property (nonatomic) BOOL useDefaultsValuesForDateTimeOverrides;
@property (nonatomic) long long dateTimeOverridesIntervalSince1970;
@property (nonatomic) BOOL overridesDateTimeToDefaultToday;
@property (nonatomic) BOOL overridesDateTimeToDefaultPast;
@property (nonatomic) NSDictionary *sessionTestWidgetInfo;

- (void)_bindAndRegisterDefaults;

@end
