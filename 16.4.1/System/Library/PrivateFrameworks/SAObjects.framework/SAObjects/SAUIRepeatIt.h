@class NSString;

@interface SAUIRepeatIt : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *contingency;

+ (id)repeatItWithDictionary:(id)a0 context:(id)a1;
+ (id)repeatIt;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
