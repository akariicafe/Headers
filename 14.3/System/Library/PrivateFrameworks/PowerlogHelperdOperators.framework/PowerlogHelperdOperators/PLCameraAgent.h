@class PLXPCListenerOperatorComposition, NSMutableDictionary, NSDictionary;

@interface PLCameraAgent : PLAgent

@property (readonly) PLXPCListenerOperatorComposition *cameraNotification;
@property (readonly) PLXPCListenerOperatorComposition *torchNotification;
@property BOOL frontCameraIsOn;
@property BOOL backCameraIsOn;
@property (retain) NSMutableDictionary *cameraState;
@property (readonly, nonatomic) BOOL allCamerasAreOff;
@property (readonly) NSDictionary *torchPowerModel;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionCamera;
+ (id)entryEventForwardDefinitionTorch;
+ (int)checkCameraType:(int)a0;
+ (id)distributionFromCameraType:(int)a0;
+ (BOOL)isFrontFacingCamera:(int)a0;
+ (BOOL)isBackFacingCamera:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)closeOpenCameraEventsAtDate:(id)a0 withEntryKey:(id)a1;
- (void)modelTorchPowerWithEntry:(id)a0;
- (void)handleCameraEvent:(id)a0 withEntryKey:(id)a1;
- (void)handleTorchEvent:(id)a0 withEntryKey:(id)a1;
- (void)closeFrontCameraAtDate:(id)a0;
- (void)modelFrontCameraPowerWithEntry:(id)a0;
- (void)closeBackCameraAtDate:(id)a0;
- (void)modelBackCameraPowerWithEntry:(id)a0;
- (double)getCameraPower:(int)a0;

@end
