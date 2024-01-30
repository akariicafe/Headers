@class NSNumber, SADataSourceInfo, NSString;

@interface SATimerObject : SADomainObject

@property (retain, nonatomic) SADataSourceInfo *dataSourceInfo;
@property (copy, nonatomic) NSNumber *isFiring;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSNumber *timerValue;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
