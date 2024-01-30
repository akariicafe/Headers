@class NSSet, NSMutableSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *smartDetectionSettingsItems;
@property (readonly, copy, nonatomic) NSSet *cameraProfiles;
@property (readonly, nonatomic) unsigned long long settingsContext;

- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)items;
- (id)initWithCameraProfiles:(id)a0 settingsContext:(unsigned long long)a1;
- (BOOL)_homeSupportsPackageDetection;

@end
