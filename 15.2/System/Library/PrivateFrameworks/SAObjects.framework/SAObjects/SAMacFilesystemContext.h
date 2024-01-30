@class NSArray;

@interface SAMacFilesystemContext : SADomainObject

@property (copy, nonatomic) NSArray *targetEntities;

+ (id)filesystemContext;
+ (id)filesystemContextWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
