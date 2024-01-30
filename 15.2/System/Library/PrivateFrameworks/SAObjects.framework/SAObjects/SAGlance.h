@class NSString, NSDictionary;

@interface SAGlance : SADomainObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *glanceDisplayName;
@property (copy, nonatomic) NSString *glanceId;
@property (copy, nonatomic) NSDictionary *localizedGlanceDisplayNameMap;

+ (id)glance;
+ (id)glanceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
