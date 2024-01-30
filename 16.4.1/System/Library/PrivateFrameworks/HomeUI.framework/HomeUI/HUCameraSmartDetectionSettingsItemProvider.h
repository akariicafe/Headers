@class NSSet, NSMutableSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *smartDetectionSettingsItems;
@property (readonly, copy, nonatomic) NSSet *cameraProfiles;
@property (readonly, nonatomic) unsigned long long settingsContext;

- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (BOOL)_homeSupportsPackageDetection;
- (id)initWithCameraProfiles:(id)a0 settingsContext:(unsigned long long)a1;

@end
