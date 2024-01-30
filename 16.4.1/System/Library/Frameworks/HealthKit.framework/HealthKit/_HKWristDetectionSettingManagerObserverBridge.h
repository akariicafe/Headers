@class HKObserverBridgeHandle;

@interface _HKWristDetectionSettingManagerObserverBridge : NSObject <HKWristDetectionSettingManagerObserver>

@property (readonly, nonatomic) HKObserverBridgeHandle *handle;

- (id)initWithHandle:(id)a0;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)a0;
- (void).cxx_destruct;

@end
