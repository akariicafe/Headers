@interface HPSFeatureStatus : NSObject

@property (class, readonly, nonatomic) BOOL isHomePodBetaEnrollmentEnabled;
@property (class, readonly, nonatomic) BOOL isLocalSettingsEnabled;
@property (class, readonly, nonatomic) BOOL isSiriSettingsAssertionsEnabled;
@property (class, readonly, nonatomic) BOOL isAnalyticsAndImprovementSettingsEnabled;

@end
