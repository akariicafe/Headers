@class HKHRElectrocardiogramRecordingFooter;

@interface HKHRElectrocardiogramRecordingBridgeSettings : NSObject

@property (readonly, nonatomic) BOOL settingVisible;
@property (readonly, nonatomic) BOOL showOnboarding;
@property (readonly, nonatomic) BOOL userInteractionEnabled;
@property (readonly, nonatomic) HKHRElectrocardiogramRecordingFooter *footer;

- (void).cxx_destruct;
- (BOOL)_featureOnboardedWithFeatureStatus:(id)a0;
- (id)_footerWithFeatureStatus:(id)a0 isAppInstalled:(BOOL)a1;
- (BOOL)_isSettingsVisibleWithFeatureStatus:(id)a0;
- (BOOL)_userInteractionEnabledWithFeatureStatus:(id)a0;
- (id)initWithFeatureStatus:(id)a0 isAppInstalled:(BOOL)a1;

@end
