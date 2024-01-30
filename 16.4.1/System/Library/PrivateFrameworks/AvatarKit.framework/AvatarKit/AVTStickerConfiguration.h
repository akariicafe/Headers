@class AVTStickerCamera, NSString, NSDictionary, NSArray, AVTAvatarPoseAnimation, AVTAvatarPhysicalizedPose, AVTAvatarBodyPose;

@interface AVTStickerConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *configurationDictionary;
@property (retain, nonatomic) NSString *assetsPath;
@property (nonatomic) BOOL hasLoadedFromConfiguration;
@property (retain, nonatomic) AVTAvatarPhysicalizedPose *physicalizedPose;
@property (retain, nonatomic) AVTAvatarBodyPose *bodyPose;
@property (retain, nonatomic) NSArray *poseAdjustments;
@property (retain, nonatomic) NSArray *props;
@property (retain, nonatomic) NSArray *shaderModifiers;
@property (retain, nonatomic) AVTStickerCamera *camera;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *emojiRepresentation;
@property (readonly, nonatomic) AVTAvatarPoseAnimation *poseAnimation;
@property (readonly, nonatomic) BOOL preRendered;
@property (readonly, nonatomic) NSString *stickerPack;
@property (readonly, nonatomic) double snapshotFrame;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) NSArray *morpherOverrides;
@property (readonly, nonatomic) NSArray *presetOverrides;
@property (readonly, nonatomic) unsigned long long stickerVersion;

+ (id)stickerConfigurationForAnimojiNamed:(id)a0 inStickerPack:(id)a1 stickerName:(id)a2;
+ (id)stickerConfigurationForMemojiInStickerPack:(id)a0 stickerName:(id)a1;
+ (id)availableStickerNamesForAnimojiNamed:(id)a0 inStickerPack:(id)a1;
+ (id)availableStickerNamesForMemojiInStickerPack:(id)a0;
+ (id)stickerConfigurationsForAnimojiNamed:(id)a0 inStickerPack:(id)a1;
+ (id)stickerConfigurationsForMemojiInStickerPack:(id)a0;
+ (id)unavailableAnimojiNamesForStickerPack:(id)a0;
+ (id)allStickerPackNames;
+ (id)stickerConfigurationsForAnimojiNamed:(id)a0;
+ (id)stickerConfigurationsForMemoji;
+ (id)stickerConfigurationsForPuppetNamed:(id)a0;

- (void)loadIfNeeded;
- (id)description;
- (void).cxx_destruct;
- (void)unload;
- (id)initWithName:(id)a0 pose:(id)a1 props:(id)a2 shaders:(id)a3 camera:(id)a4 options:(id)a5;
- (id)framingMode;
- (BOOL)definesPoseOnly;
- (void)_updateDictionary:(id)a0 withTargetPath:(id)a1;
- (id)dictionaryWithTargetPath:(id)a0;
- (BOOL)hasProps;
- (id)initWithConfigDictionary:(id)a0 assetsPath:(id)a1 forStickerPack:(id)a2;
- (id)initWithConfigurationAtPath:(id)a0;
- (id)initWithConfigurationAtPath:(id)a0 forStickerPack:(id)a1;
- (id)initWithName:(id)a0 pose:(id)a1 bodyPose:(id)a2 props:(id)a3 shaders:(id)a4 camera:(id)a5 options:(id)a6;
- (id)initWithName:(id)a0 poseAnimation:(id)a1 bodyPose:(id)a2 props:(id)a3 shaders:(id)a4 camera:(id)a5 options:(id)a6;
- (void)setupOptions:(id)a0;
- (BOOL)showsBody;

@end
