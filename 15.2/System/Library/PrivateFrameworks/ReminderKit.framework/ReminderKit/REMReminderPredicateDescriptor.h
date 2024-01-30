@class NSArray, NSString, NSDate, REMObjectID;

@interface REMReminderPredicateDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) REMObjectID *listID;
@property (retain, nonatomic) REMObjectID *parentReminderID;
@property (retain, nonatomic) NSArray *objectIDs;
@property (retain, nonatomic) NSDate *startingDueDate;
@property (retain, nonatomic) NSDate *endingDueDate;
@property (nonatomic) BOOL completed;
@property (retain, nonatomic) NSArray *descriptors;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long textMatching;

+ (id)andPredicateDescriptorWithDescriptors:(id)a0;
+ (id)orPredicateDescriptorWithDescriptors:(id)a0;
+ (id)predicateDescriptorForRemindersWithListID:(id)a0;
+ (id)predicateDescriptorForRemindersWithParentReminderID:(id)a0;
+ (id)predicateDescriptorForRemindersWithObjectIDs:(id)a0;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrBefore:(id)a0;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrAfter:(id)a0;
+ (id)predicateDescriptorForRemindersWithDueDateBetween:(id)a0 and:(id)a1;
+ (id)predicateDescriptorForRemindersWithCompleted:(BOOL)a0;
+ (id)predicateDescriptorForRemindersWithTitleEquals:(id)a0;
+ (id)predicateDescriptorForRemindersWithTitleContains:(id)a0;
+ (id)predicateDescriptorForRemindersWithTitleBeginsWith:(id)a0;
+ (id)predicateDescriptorForRemindersWithTitleEndsWith:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0;
- (unsigned long long)hash;
- (id)initWithReminderPredicateDescriptor:(id)a0;

@end
