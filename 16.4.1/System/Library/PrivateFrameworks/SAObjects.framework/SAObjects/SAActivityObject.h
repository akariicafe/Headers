@class NSString, NSDictionary, NSDate, SAClientUserActivity;

@interface SAActivityObject : SADomainObject

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *streamType;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) SAClientUserActivity *userActivity;
@property (copy, nonatomic) NSString *visibility;

+ (id)activityObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)activityObject;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
