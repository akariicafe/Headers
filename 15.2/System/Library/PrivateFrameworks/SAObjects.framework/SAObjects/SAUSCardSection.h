@class SAUIAppPunchOut;

@interface SAUSCardSection : SADomainObject

@property (retain, nonatomic) SAUIAppPunchOut *punchOut;

+ (id)cardSection;
+ (id)cardSectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
