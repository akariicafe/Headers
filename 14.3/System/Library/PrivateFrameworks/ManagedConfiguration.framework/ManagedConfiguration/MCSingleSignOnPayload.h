@class NSString, MCSingleSignOnPayloadKerberosInfo;

@interface MCSingleSignOnPayload : MCPayload

@property (retain, nonatomic) NSString *humanReadableName;
@property (retain, nonatomic) MCSingleSignOnPayloadKerberosInfo *kerberosInfo;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)title;

@end
