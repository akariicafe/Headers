@class NSMutableDictionary, NSDictionary, PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition;

@interface PLCameraAgent : PLAgent

@property (readonly) PLXPCListenerOperatorComposition *cameraNotification;
@property (readonly) PLXPCListenerOperatorComposition *torchNotification;
@property (readonly) PLXPCListenerOperatorComposition *smartCamDetectionNotification;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property BOOL frontCameraIsOn;
@property BOOL backCameraIsOn;
@property (retain) NSMutableDictionary *cameraState;
@property (readonly, nonatomic) BOOL allCamerasAreOff;
@property (readonly) NSDictionary *torchPowerModel;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitionCamera;
+ (id)entryEventForwardDefinitionTorch;
+ (id)entryEventIntervalDefinitionSmartCamDetection;
+ (int)checkCameraType:(int)a0;
+ (id)distributionFromCameraType:(int)a0;
+ (BOOL)isFrontFacingCamera:(int)a0;
+ (BOOL)isBackFacingCamera:(int)a0;

- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)closeOpenCameraEventsAtDate:(id)a0 withEntryKey:(id)a1;
- (void)modelTorchPowerWithEntry:(id)a0;
- (void)handleCameraEvent:(id)a0 withEntryKey:(id)a1;
- (void)handleTorchEvent:(id)a0 withEntryKey:(id)a1;
- (void)logEventIntervalSmartCamDetection:(id)a0;
- (void)closeFrontCameraAtDate:(id)a0;
- (void)modelFrontCameraPowerWithEntry:(id)a0;
- (void)closeBackCameraAtDate:(id)a0;
- (void)modelBackCameraPowerWithEntry:(id)a0;
- (double)getCameraPower:(int)a0;

@end
