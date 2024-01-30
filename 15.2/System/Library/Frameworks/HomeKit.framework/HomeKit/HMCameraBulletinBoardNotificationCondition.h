@class HMCameraSignificantEventReasonNotificationCondition, NSString, NSPredicate, NSArray, HMCameraSignificantEventPersonFamiliarityNotificationCondition;

@interface HMCameraBulletinBoardNotificationCondition : NSObject <HMFObject, NSCopying, NSMutableCopying>

@property (copy) HMCameraSignificantEventReasonNotificationCondition *significantEventReasonCondition;
@property (copy) HMCameraSignificantEventPersonFamiliarityNotificationCondition *significantEventPersonFamiliarityCondition;
@property (copy) NSPredicate *dateComponentsPredicate;
@property (copy) NSPredicate *presencePredicate;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)initWithPredicate:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
