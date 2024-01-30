@class NSString, CMMotionManager, CAMLevelViewModel, BKSAccelerometer, CAMPreviewAlignmentModel;

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate, CAMLevelViewModelChangeObserver>

@property (nonatomic, setter=_setCachedCaptureOrientation:) long long _cachedCaptureOrientation;
@property (readonly, nonatomic) long long _fallbackCaptureOrientation;
@property (nonatomic, setter=_setDidNotifyCaptureOrientationWasInvalid:) BOOL _didNotifyCaptureOrientationWasInvalid;
@property (retain, nonatomic, setter=_setAccelerometer:) BKSAccelerometer *_accelerometer;
@property (nonatomic, setter=_setNumberOfDominantPhysicalButtonObservers:) long long _numberOfDominantPhysicalButtonObservers;
@property (readonly, nonatomic) CMMotionManager *_physicalButtonMotionManager;
@property (nonatomic, setter=_setDominantPhysicalButton:) long long dominantPhysicalButton;
@property (readonly, nonatomic) CMMotionManager *_attitudeAlignmentMotionManager;
@property (retain, nonatomic, setter=_setActiveLevelViewModel:) CAMLevelViewModel *activeLevelViewModel;
@property (retain, nonatomic, setter=_setActivePreviewAlignmentModel:) CAMPreviewAlignmentModel *activePreviewAlignmentModel;
@property (readonly, nonatomic) long long captureOrientation;
@property (readonly, nonatomic) long long panoramaCaptureOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleApplicationDidEnterBackground:(id)a0;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (void)endUpdatingPreviewAlignmentModel;
- (id)_debugStringForInterfaceOrientation:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateAttitudeAlignmentMotionManager;
- (void)_updateInitialOrientation;
- (void)dealloc;
- (void)_handleLevelMotionUpdate:(id)a0 error:(id)a1;
- (void)endUpdatingActiveLevelViewModel;
- (void)debugValidateCaptureOrientationForMode:(long long)a0;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (void)accelerometer:(id)a0 didChangeDeviceOrientation:(long long)a1;
- (void)_updatePhysicalButtonObservation;
- (void)_handleApplicationWillEnterForeground:(id)a0;
- (void)observable:(id)a0 didPublishChange:(unsigned long long)a1 withContext:(void *)a2;
- (void)beginUpdatingLevelViewModel:(id)a0;
- (id)_debugStringForDeviceOrientation:(long long)a0;
- (void)beginUpdatingPreviewAlignmentModel:(id)a0;

@end
