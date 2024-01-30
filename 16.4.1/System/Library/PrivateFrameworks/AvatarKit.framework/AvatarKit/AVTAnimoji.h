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

+ (BOOL)supportsSecureCoding;
+ (id)animojiNames;
+ (id)thumbnailForAnimojiNamed:(id)a0 options:(id)a1;
+ (id)animojiNamed:(id)a0;
+ (id)_sceneURLForPuppetDirectoryURL:(id)a0;
+ (id)_scenePathForPuppetNamed:(id)a0;
+ (id)animojiWithContentsOfURL:(id)a0;
+ (void)preloadAnimojiNamed:(id)a0;
+ (void)preloadPuppet:(id)a0;
+ (void)preloadPuppetNamed:(id)a0;
+ (id)puppetNamed:(id)a0 options:(id)a1;
+ (id)puppetNames;
+ (id)thumbnailForPuppetNamed:(id)a0 options:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)url;
- (void)update;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadIfNeeded;
- (void)setUrl:(id)a0;
- (void)setName:(id)a0;
- (id)description;
- (void)_load;
- (void).cxx_destruct;
- (id)headNode;
- (void)setPuppetState:(id)a0;
- (id)_sceneURL;
- (id)assetContainerNodes;
- (id)avatarNode;
- (void)configureForBestAnimationQuality;
- (id)copyWithUsageIntent:(unsigned long long)a0;
- (id)initWithDescriptor:(id)a0 usageIntent:(unsigned long long)a1 error:(id *)a2;
- (id)initWithName:(id)a0 error:(id *)a1;
- (id)newDescriptor;
- (id)puppetState;
- (id)specializationSettings;
- (id)stickerPhysicsStateIdentifier;
- (unsigned long long)usageIntent;

@end
