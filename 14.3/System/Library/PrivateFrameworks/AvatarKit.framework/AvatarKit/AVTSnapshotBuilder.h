@class SCNNode, NSString, SCNRenderer, AVTAvatar, AVTAvatarEnvironment;

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTAvatar *_avatar;
    AVTAvatar *_snapshotedAvatar;
    SCNRenderer *_renderer;
    SCNNode *_avatarNode;
    AVTAvatarEnvironment *_environment;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (readonly, nonatomic) SCNRenderer *renderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct CGImage { } *)copyRescaledCGImage:(struct CGImage { } *)a0 by:(float)a1;

- (id)init;
- (void).cxx_destruct;
- (void)renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;
- (id)animatedImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2 useACopy:(BOOL)a3;
- (void)setupAvatarWithOptions:(id)a0 useACopy:(BOOL)a1;
- (void)_applyOptions:(id)a0;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;

@end
