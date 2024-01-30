@class NSString;

@interface SAUIDisambiguationItemSelected : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *selectedAceId;

+ (id)disambiguationItemSelected;
+ (id)disambiguationItemSelectedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
