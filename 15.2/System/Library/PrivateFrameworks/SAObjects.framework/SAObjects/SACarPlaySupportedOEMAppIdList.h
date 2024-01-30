@class NSArray;

@interface SACarPlaySupportedOEMAppIdList : SADomainObject

@property (copy, nonatomic) NSArray *appIds;

+ (id)carPlaySupportedOEMAppIdList;
+ (id)carPlaySupportedOEMAppIdListWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
