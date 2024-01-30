@class NSArray, NSString;

@interface SAAnswerObject : SADomainObject

@property (copy, nonatomic) NSArray *lines;
@property (copy, nonatomic) NSString *title;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
