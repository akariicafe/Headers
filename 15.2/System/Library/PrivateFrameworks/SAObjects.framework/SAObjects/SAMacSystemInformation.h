@class NSString;

@interface SAMacSystemInformation : SADomainObject

@property (copy, nonatomic) NSString *query;

+ (id)systemInformation;
+ (id)systemInformationWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
