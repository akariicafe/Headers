@class NSArray, NSString, SADataSourceInfo, NSNumber;

@interface SAAlarmObject : SADomainObject

@property (retain, nonatomic) SADataSourceInfo *dataSourceInfo;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *firing;
@property (copy, nonatomic) NSArray *frequency;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSNumber *relativeOffsetMinutes;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
