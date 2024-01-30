@class NSString, NSArray, SAHAAttributeValue;

@interface SAHAAction : SADomainObject

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *attribute;
@property (copy, nonatomic) NSArray *executionFlags;
@property (nonatomic) long long executionOrder;
@property (nonatomic) BOOL includeCompleteInformation;
@property (retain, nonatomic) SAHAAttributeValue *value;

+ (id)action;
+ (id)actionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
