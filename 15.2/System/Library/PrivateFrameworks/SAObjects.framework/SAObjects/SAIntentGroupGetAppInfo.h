@class NSArray;

@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appIdentifyingInfo;
@property (nonatomic) BOOL shouldSearchLocallyOnly;

+ (id)getAppInfo;
+ (id)getAppInfoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
