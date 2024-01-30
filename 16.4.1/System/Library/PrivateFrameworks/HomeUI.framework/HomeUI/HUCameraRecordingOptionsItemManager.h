@class HUCameraRecordingSettingsModule, NSString;

@interface HUCameraRecordingOptionsItemManager : HFItemManager <HUCameraRecordingSettingsModuleDelegate>

@property (retain, nonatomic) HUCameraRecordingSettingsModule *cameraRecordingItemModule;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
