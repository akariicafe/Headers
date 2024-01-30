@class HMCameraSignificantEventPersonFamiliarityNotificationCondition, HMCameraSignificantEventReasonNotificationCondition, NSPredicate;

@interface HMMutableCameraBulletinBoardNotificationCondition : HMCameraBulletinBoardNotificationCondition

@property (copy) HMCameraSignificantEventReasonNotificationCondition *significantEventReasonCondition;
@property (copy) HMCameraSignificantEventPersonFamiliarityNotificationCondition *significantEventPersonFamiliarityCondition;
@property (copy) NSPredicate *dateComponentsPredicate;
@property (copy) NSPredicate *presencePredicate;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
