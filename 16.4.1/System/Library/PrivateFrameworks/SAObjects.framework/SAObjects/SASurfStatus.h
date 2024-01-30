@class NSString;

@interface SASurfStatus : SADomainObject

@property (copy, nonatomic) NSString *currentState;

+ (id)surfStatus;
+ (id)surfStatusWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
