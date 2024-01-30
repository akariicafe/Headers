@class NSArray;

@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *queries;

+ (id)getIntentDefinitions;
+ (id)getIntentDefinitionsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
