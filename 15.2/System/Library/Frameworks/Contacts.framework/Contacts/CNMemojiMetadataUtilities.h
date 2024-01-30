@interface CNMemojiMetadataUtilities : NSObject

+ (id)memojiMetadataDataForAvatarRecordIdentifier:(id)a0 poseConfigurationData:(id)a1 backgroundColorDescription:(id)a2 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
+ (id)memojiMetadataDataForAvatarRecord:(id)a0 poseConfiguration:(id)a1 backgroundColorDescription:(id)a2 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
+ (id)memojiMetadataDataForAvatarRecordIdentifier:(id)a0 poseConfigurationData:(id)a1 backgroundColorDescription:(id)a2;
+ (id)physicsStatesDictionaryRepresentationForPose:(id)a0;
+ (id)poseConfigurationForData:(id)a0 withAvatarRecord:(id)a1;
+ (id)avatarRecordForIdentifier:(id)a0;
+ (id)memojiMetadataFromData:(id)a0;
+ (id)dataForPoseConfiguration:(id)a0;
+ (id)poseConfigurationForAvatarRecord:(id)a0 poseName:(id)a1 pose:(id)a2;
+ (id)memojiMetadataDataForAvatarRecord:(id)a0 poseConfiguration:(id)a1 backgroundColorDescription:(id)a2;
+ (id)os_log;

@end
