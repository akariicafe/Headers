@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *locales;

+ (id)setSupportedLocales;
+ (id)setSupportedLocalesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
