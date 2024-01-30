@class NSString;

@interface SAUIRepeatIt : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *contingency;

+ (id)repeatIt;
+ (id)repeatItWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
