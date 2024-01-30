@class NSURL;

@interface SANoteDelete : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;

+ (id)delete;
+ (id)deleteWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
