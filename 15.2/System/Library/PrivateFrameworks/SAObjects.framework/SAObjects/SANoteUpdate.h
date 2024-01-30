@class NSString, NSURL;

@interface SANoteUpdate : SADomainCommand

@property (copy, nonatomic) NSString *contentsToAppend;
@property (copy, nonatomic) NSURL *identifier;

+ (id)update;
+ (id)updateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
