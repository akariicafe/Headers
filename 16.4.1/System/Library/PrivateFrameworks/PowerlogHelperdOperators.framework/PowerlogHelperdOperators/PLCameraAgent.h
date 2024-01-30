@class NSMutableDictionary, NSDictionary, PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition;

@interface PLCameraAgent : PLAgent

@property (retain) NSMutableDictionary *cameraState;
@property (readonly) PLXPCListenerOperatorComposition *cameraNotification;
@property (readonly) PLXPCListenerOperatorComposition *torchNotification;
@property (readonly) PLXPCListenerOperatorComposition *smartCamDetectionNotification;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property BOOL frontCameraIsOn;
@property BOOL backCameraIsOn;
@property (retain) NSMutableDictionary *backgroundBlurState;
@property (readonly, nonatomic) BOOL allCamerasAreOff;
@property (readonly) NSDictionary *torchPowerModel;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (int)checkCameraType:(int)a0;
+ (id)distributionFromCameraType:(int)a0;
+ (id)entryEventForwardDefinitionCamera;
+ (id)entryEventForwardDefinitionTorch;
+ (id)entryEventIntervalDefinitionSmartCamDetection;
+ (BOOL)isBackFacingCamera:(int)a0;
+ (BOOL)isFrontFacingCamera:(int)a0;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;
- (void).cxx_destruct;
- (void)handleCameraEvent:(id)a0 withEntryKey:(id)a1;
- (double)getCameraPower:(int)a0;
- (void)modelFrontCameraPowerWithEntry:(id)a0;
- (void)closeBackCameraAtDate:(id)a0;
- (void)closeFrontCameraAtDate:(id)a0;
- (void)closeOpenCameraEventsAtDate:(id)a0 withEntryKey:(id)a1;
- (void)handleTorchEvent:(id)a0 withEntryKey:(id)a1;
- (void)logEventIntervalSmartCamDetection:(id)a0;
- (void)modelBackCameraPowerWithEntry:(id)a0;
- (void)modelTorchPowerWithEntry:(id)a0;

@end
