@class NSArray, SAUIAppPunchOut, NSString;

@interface SAUSSection : SADomainObject

@property (copy, nonatomic) NSArray *cardResults;
@property (copy, nonatomic) NSArray *genericResults;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *sectionTitle;

+ (id)section;
+ (id)sectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
