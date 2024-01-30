@interface SBDeviceApplicationSceneOverlayBasicWrapperView : UIView <SBDeviceApplicationSceneOverlayView>

@property (nonatomic) long long hostOrientation;
@property (nonatomic) BOOL shouldLayoutOverlayImmediatelyForContainerGeometryChange;
@property (readonly, nonatomic) BOOL needsCounterRotation;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
