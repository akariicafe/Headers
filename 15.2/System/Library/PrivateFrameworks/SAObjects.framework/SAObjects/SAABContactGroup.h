@class NSString, SASource;

@interface SAABContactGroup : SADomainObject

@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) SASource *groupSource;

+ (id)contactGroup;
+ (id)contactGroupWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
