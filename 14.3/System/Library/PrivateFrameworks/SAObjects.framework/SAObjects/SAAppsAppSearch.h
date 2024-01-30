@class NSString;

@interface SAAppsAppSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *applicationName;

+ (id)appSearch;
+ (id)appSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
