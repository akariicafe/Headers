@class SCNNode, NSString, NSDictionary, NSURL;

@interface AVTAnimoji : AVTAvatar {
    NSURL *_url;
    SCNNode *_lightingNode;
    SCNNode *_headNode;
    SCNNode *_avatarNode;
    SCNNode *_cameraNode;
    NSDictionary *_specializationSettings;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SCNNode *lightingNode;
@property (readonly, nonatomic) SCNNode *cameraNode;

+ (id)animojiNames;
+ (id)thumbnailForAnimojiNamed:(id)a0 options:(id)a1;
+ (id)animojiNamed:(id)a0;
+ (void)preloadAnimojiNamed:(id)a0;
+ (id)_sceneURLForPuppetDirectoryURL:(id)a0;
+ (id)_scenePathForPuppetNamed:(id)a0;
+ (id)puppetNamed:(id)a0 options:(id)a1;
+ (void)preloadPuppet:(id)a0;
+ (id)puppetNames;
+ (id)thumbnailForPuppetNamed:(id)a0 options:(id)a1;
+ (void)preloadPuppetNamed:(id)a0;
+ (id)animojiWithContentsOfURL:(id)a0;

- (void)loadIfNeeded;
- (id)url;
- (void)setName:(id)a0;
- (void)setUrl:(id)a0;
- (id)description;
- (void)update;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_load;
- (id)headNode;
- (unsigned long long)usageIntent;
- (id)specializationSettings;
- (id)avatarNode;
- (id)stickerPhysicsStateIdentifier;
- (id)_sceneURL;
- (id)initWithName:(id)a0 error:(id *)a1;
- (id)newDescriptor;
- (id)initWithDescriptor:(id)a0 usageIntent:(unsigned long long)a1 error:(id *)a2;
- (id)copyWithUsageIntent:(unsigned long long)a0;
- (id)puppetState;
- (void)setPuppetState:(id)a0;
- (void)configureForBestAnimationQuality;

@end
