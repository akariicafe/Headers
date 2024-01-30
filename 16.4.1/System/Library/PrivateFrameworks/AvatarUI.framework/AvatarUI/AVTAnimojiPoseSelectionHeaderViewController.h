@class AVTView, AVTViewUpdater, AVTStickerConfiguration;
@protocol AVTAvatarRecord;

@interface AVTAnimojiPoseSelectionHeaderViewController : UIViewController

@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTView *avtView;
@property (retain, nonatomic) AVTStickerConfiguration *displayedConfiguration;
@property (retain, nonatomic) AVTViewUpdater *viewUpdater;

- (id)initWithRecord:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)endFaceTracking;
- (void)beginFaceTrackingWithCompletionBlock:(id /* block */)a0;
- (id)newStickerConfigurationFromCurrentPose;
- (void)pauseFaceTracking;
- (void)updateForStickerConfiguration:(id)a0 animated:(BOOL)a1;

@end
