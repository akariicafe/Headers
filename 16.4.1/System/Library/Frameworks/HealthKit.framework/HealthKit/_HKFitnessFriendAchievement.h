@class NSUUID, NSString, NSDate, NSNumber;

@interface _HKFitnessFriendAchievement : HKSample <NSCopying>

@property (retain, nonatomic) NSUUID *friendUUID;
@property (retain, nonatomic) NSString *templateUniqueName;
@property (retain, nonatomic) NSDate *completedDate;
@property (retain, nonatomic) NSNumber *value;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)achievementWithTemplateUniqueName:(id)a0 completedDate:(id)a1 value:(id)a2 friendUUID:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
