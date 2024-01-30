@class NSString, NSMutableArray;

@interface HUMultiCameraRecordingOptionsItemManager : HFItemManager <HUCameraRecordingSettingsModuleDelegate>

@property (retain, nonatomic) NSMutableArray *cameraRecordingItemModules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
