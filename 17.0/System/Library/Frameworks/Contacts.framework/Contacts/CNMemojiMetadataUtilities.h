@interface CNMemojiMetadataUtilities : NSObject

+ (id)os_log;
+ (id)avatarRecordForIdentifier:(id)a0;
+ (id)dataForPoseConfiguration:(id)a0;
+ (id)memojiMetadataDataForAvatarRecord:(id)a0 poseConfiguration:(id)a1 backgroundColorDescription:(id)a2 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
+ (id)memojiMetadataFromData:(id)a0;
+ (id)poseConfigurationForData:(id)a0 withAvatarRecord:(id)a1;
+ (id)dataForMemojiMetadata:(id)a0 backgroundColorDescription:(id)a1 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
+ (id)dataForMemojiMetadata:(id)a0;
+ (id)memojiMetadataDataForAvatarRecord:(id)a0 poseConfiguration:(id)a1 backgroundColorDescription:(id)a2;
+ (id)memojiMetadataDataForAvatarRecordIdentifier:(id)a0 poseConfigurationData:(id)a1 backgroundColorDescription:(id)a2;
+ (id)memojiMetadataDataForAvatarRecordIdentifier:(id)a0 poseConfigurationData:(id)a1 backgroundColorDescription:(id)a2 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
+ (id)physicsStatesDictionaryRepresentationForPose:(id)a0;
+ (id)stickerConfigurationForAvatarRecord:(id)a0 stickerName:(id)a1 pose:(id)a2;
+ (id)stickerConfigurationForAvatarRecord:(id)a0 stickerName:(id)a1 stickerPack:(id)a2;

@end
