@class NSString, NSURL;

@interface SANoteUpdate : SADomainCommand

@property (copy, nonatomic) NSString *contentsToAppend;
@property (copy, nonatomic) NSURL *identifier;

+ (id)updateWithDictionary:(id)a0 context:(id)a1;
+ (id)update;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
