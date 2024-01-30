@class NSArray;

@interface MCAppWhitelistPayloadBase : MCPayload

@property (retain, nonatomic) NSArray *whitelistedAppsAndOptions;
@property (nonatomic) BOOL allowAccessWithoutPasscode;
@property (nonatomic) BOOL forceAllowSupervisorAccess;

+ (id)knownOptionsKeys;
+ (id)knownUserEnabledOptionKeys;

- (id)restrictions;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
