@class NSArray, SAHAFilter;

@interface SAHAActionRequest : SADomainObject

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) long long executionOrder;
@property (retain, nonatomic) SAHAFilter *filter;

+ (id)actionRequestWithDictionary:(id)a0 context:(id)a1;
+ (id)actionRequest;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
