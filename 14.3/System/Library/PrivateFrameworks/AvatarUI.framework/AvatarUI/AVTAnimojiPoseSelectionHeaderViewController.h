@class AVTView, AVTViewUpdater, AVTAvatarPose, AVTAvatarPhysicsState;
@protocol AVTAvatarRecord;

@interface AVTAnimojiPoseSelectionHeaderViewController : UIViewController

@property (nonatomic) BOOL isLiveTracking;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTView *avtView;
@property (retain, nonatomic) AVTAvatarPose *displayedPose;
@property (retain, nonatomic) AVTViewUpdater *viewUpdater;
@property (readonly, nonatomic) AVTAvatarPose *currentPose;
@property (readonly, nonatomic) AVTAvatarPhysicsState *currentPhysicsState;

- (void).cxx_destruct;
- (void)endFaceTracking;
- (void)_updatePose:(id)a0 fromPose:(id)a1 animated:(BOOL)a2;
- (BOOL)enableFaceTrackingIfNeeded;
- (void)updatePreviewForRecord:(id)a0;
- (void)beginFaceTrackingWithCompletionBlock:(id /* block */)a0;
- (void)updateForPose:(id)a0 animated:(BOOL)a1;
- (id)initWithRecord:(id)a0;
- (void)viewDidLoad;

@end
