@class NSString, NSDictionary;

@interface MCSharedDeviceConfigurationPayload : MCPayload

@property (readonly, nonatomic) NSString *lockScreenFootnote;
@property (readonly, nonatomic) NSString *assetTagInformation;
@property (readonly, nonatomic) NSDictionary *configuration;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (void).cxx_destruct;

@end
