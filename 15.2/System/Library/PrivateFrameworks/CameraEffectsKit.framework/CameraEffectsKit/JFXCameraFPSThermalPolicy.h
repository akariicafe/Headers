@class NSString;

@interface JFXCameraFPSThermalPolicy : NSObject <JFXThermalPolicy, JFXVideoCameraThermalDelegate>

@property (readonly, nonatomic) unsigned long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraFPSForThermalLevel:(int)a0 deviceType:(id)a1 minRate:(out int *)a2 maxRate:(out int *)a3;

@end
