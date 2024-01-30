@class NSXPCListener, NSSet, NSString, NSMutableSet, PGPictureInPictureRemoteObject, PGPictureInPictureApplication, NSObject;
@protocol OS_dispatch_queue, PGPictureInPictureControllerDelegate, PGPictureInPictureAnalyticsDelegate;

@interface PGPictureInPictureController : NSObject <NSXPCListenerDelegate, PGPictureInPictureRemoteObjectDelegate> {
    NSMutableSet *_pictureInPictureRemoteObjects;
    NSMutableSet *_pictureInPictureRemoteObjectsSupportingActiveSessionCancellationOnStart;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    PGPictureInPictureRemoteObject *_activePictureInPictureRemoteObject;
    PGPictureInPictureRemoteObject *_suspendedPictureInPictureRemoteObject;
    id<PGPictureInPictureControllerDelegate> _delegate;
    struct { unsigned char pictureInPictureController_didCreatePictureInPictureViewController : 1; unsigned char pictureInPictureController_willDestroyPictureInPictureViewController : 1; unsigned char pictureInPictureController_willHidePictureInPictureViewController : 1; unsigned char pictureInPictureController_didHidePictureInPictureViewController : 1; unsigned char pictureInPictureController_shouldCancelPictureInPictureForApplication_whenStartingPictureInPictureForApplication : 1; unsigned char pictureInPictureController_shouldDenyNewConnection : 1; unsigned char pictureInPictureController_didRequestStopForPictureInPictureViewController_sourceSceneSessionIdentifier_animated : 1; } _delegateRespondsTo;
}

@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (readonly, nonatomic) NSSet *pictureInPictureApplications;
@property (readonly, nonatomic) PGPictureInPictureApplication *activePictureInPictureApplication;
@property (readonly, nonatomic) BOOL isStartingStoppingOrCancellingPictureInPicture;
@property (weak, nonatomic) id<PGPictureInPictureControllerDelegate> delegate;
@property (weak, nonatomic) id<PGPictureInPictureAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPictureInPictureSupported;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)a0 sceneSessionPersistentIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSizeForInteractivelyEnteringBackgroundForApplication:(id)a0 sceneSessionPersistentIdentifier:(id)a1;
- (BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:(id)a0 sceneSessionPersistentIdentifier:(id)a1;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)a0 sceneSessionPersistentIdentifier:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)stopPictureInPictureForApplication:(id)a0 sceneSessionPersistentIdentifier:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)cancelPictureInPictureForApplication:(id)a0 sceneSessionPersistentIdentifier:(id)a1;
- (id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:(id)a0 sceneSessionPersistentIdentifier:(id)a1 error:(id *)a2;
- (id)_remoteObjectThatCanCancelPictureInPictureApplication:(id)a0 sceneSessionPersistentIdentifier:(id)a1 error:(id *)a2;
- (id)_remoteObjectThatCanStopPictureInPictureApplication:(id)a0 sceneSessionPersistentIdentifier:(id)a1 error:(id *)a2;
- (id)_remoteObjectThatCanEndTwoStageStopPictureInPictureApplication:(id)a0 error:(id *)a1;
- (id)_remoteObjectForPictureInPictureApplication:(id)a0 passingTest:(id /* block */)a1 error:(id *)a2;
- (void)pictureInPictureInterruptionBeganWithReason:(long long)a0;
- (void)pictureInPictureInterruptionEndedWithReason:(long long)a0;
- (id)_remoteObjectsForPictureInPictureApplication:(id)a0;
- (BOOL)_pictureInPictureRemoteObjectIsFaceTime:(id)a0;
- (BOOL)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)a0;
- (BOOL)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(id)a0;
- (BOOL)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(id)a0;
- (void)pictureInPictureRemoteObject:(id)a0 didRequestPictureInPictureStopForViewController:(id)a1 sourceSceneSessionIdentifier:(id)a2 animated:(BOOL)a3;
- (void)pictureInPictureRemoteObject:(id)a0 didCreatePictureInPictureViewController:(id)a1;
- (void)pictureInPictureRemoteObject:(id)a0 willShowPictureInPictureViewController:(id)a1;
- (void)pictureInPictureRemoteObject:(id)a0 didShowPictureInPictureViewController:(id)a1;
- (void)pictureInPictureRemoteObject:(id)a0 willHidePictureInPictureViewController:(id)a1;
- (void)pictureInPictureRemoteObject:(id)a0 didHidePictureInPictureViewController:(id)a1;
- (void)pictureInPictureRemoteObject:(id)a0 willDestroyPictureInPictureViewController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)a0;
- (BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:(id)a0;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)stopPictureInPictureForApplication:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)cancelPictureInPictureForApplication:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeForActivePictureInPictureWithApplication:(id)a0 sceneSessionPersistentIdentifier:(id)a1;
- (void)beginTwoStageStopPictureInPictureForApplication:(id)a0 withSceneSessionPersistentIdentifier:(id)a1 animated:(BOOL)a2 byRestoringUserInterfaceWithCompletionHandler:(id /* block */)a3;
- (void)endTwoStageStopPictureInPictureForApplication:(id)a0 withSceneSessionPersistentIdentifier:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)startPictureInPictureResourcesUsageReductionForApplication:(id)a0 requestingViewController:(id)a1;
- (void)stopPictureInPictureResourcesUsageReductionForApplication:(id)a0 requestingViewController:(id)a1;
- (void)pictureInPictureInterruptionBegan;
- (void)pictureInPictureInterruptionEnded;
- (id)existingPictureInPictureApplicationForBundleIdentifier:(id)a0;
- (id)_remoteObjectForPictureInPictureApplication:(id)a0 sceneSessionPersistentIdentifier:(id)a1 error:(id *)a2;

@end
