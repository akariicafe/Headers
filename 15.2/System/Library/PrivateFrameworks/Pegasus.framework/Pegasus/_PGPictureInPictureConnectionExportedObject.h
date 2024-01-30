@class NSString, PGPictureInPictureProxy;

@interface _PGPictureInPictureConnectionExportedObject : NSObject <PGPictureInPictureExportedInterface> {
    PGPictureInPictureProxy *_pictureInPictureProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (oneway void)actionButtonTapped;
- (oneway void)handleCommand:(id)a0;
- (oneway void)pictureInPictureStartRequestedAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (oneway void)pictureInPictureStopRequestedAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(id /* block */)a0;
- (oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(id /* block */)a0;
- (oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (oneway void)updatePictureInPicturePossible:(BOOL)a0;
- (oneway void)pictureInPictureInvalidated;
- (oneway void)updateHostedWindowSize:(struct CGSize { double x0; double x1; })a0 animationType:(long long)a1 initialSpringVelocity:(double)a2 synchronizationFence:(id)a3;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)setStashedOrUnderLock:(BOOL)a0;
- (oneway void)setResourcesUsageReductionReasons:(unsigned long long)a0;
- (id)initWithPictureInPictureProxy:(id)a0;

@end
