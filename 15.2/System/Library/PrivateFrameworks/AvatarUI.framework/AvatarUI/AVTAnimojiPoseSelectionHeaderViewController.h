@class AVTView, AVTViewUpdater, AVTAvatarPose, AVTAvatarPhysicsState;
@protocol AVTAvatarRecord;

@interface AVTAnimojiPoseSelectionHeaderViewController : UIViewController

@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTView *avtView;
@property (retain, nonatomic) AVTAvatarPose *displayedPose;
@property (retain, nonatomic) AVTViewUpdater *viewUpdater;
@property (readonly, nonatomic) AVTAvatarPose *currentPose;
@property (readonly, nonatomic) AVTAvatarPhysicsState *currentPhysicsState;

- (id)initWithRecord:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)beginFaceTrackingWithCompletionBlock:(id /* block */)a0;
- (void)pauseFaceTracking;
- (void)endFaceTracking;
- (void)updateForPose:(id)a0 animated:(BOOL)a1;

@end
