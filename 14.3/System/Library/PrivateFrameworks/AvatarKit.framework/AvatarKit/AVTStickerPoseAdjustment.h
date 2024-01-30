@class NSString, AVTAvatarPose;

@interface AVTStickerPoseAdjustment : NSObject

@property (nonatomic) long long presetCategory;
@property (retain, nonatomic) NSString *presetIdentifier;
@property (retain, nonatomic) AVTAvatarPose *pose;

- (void).cxx_destruct;
- (id)poseByApplyingToPose:(id)a0 forAvatar:(id)a1;

@end
