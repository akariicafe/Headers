@class NSString;

@interface SANoteCreate : SADomainCommand

@property (copy, nonatomic) NSString *contents;

+ (id)create;
+ (id)createWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
