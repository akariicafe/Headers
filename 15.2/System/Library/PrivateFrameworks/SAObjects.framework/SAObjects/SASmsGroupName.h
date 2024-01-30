@class NSString;

@interface SASmsGroupName : SADomainObject

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNameId;

+ (id)groupName;
+ (id)groupNameWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
