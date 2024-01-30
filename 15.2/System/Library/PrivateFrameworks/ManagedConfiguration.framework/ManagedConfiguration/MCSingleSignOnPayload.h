@class NSString, MCSingleSignOnPayloadKerberosInfo;

@interface MCSingleSignOnPayload : MCPayload

@property (retain, nonatomic) NSString *humanReadableName;
@property (retain, nonatomic) MCSingleSignOnPayloadKerberosInfo *kerberosInfo;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)title;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
