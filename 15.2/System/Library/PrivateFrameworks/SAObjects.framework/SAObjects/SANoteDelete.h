@class NSURL;

@interface SANoteDelete : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;

+ (id)delete;
+ (id)deleteWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
