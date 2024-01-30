@class NSArray, NSNumber, HRSSupportedFHIRConfiguration;

@interface HDHealthRecordDocumentTypeConfiguration : NSObject

@property (copy, nonatomic) NSArray *extractionRulesets;
@property (readonly, copy, nonatomic) NSNumber *extractionRulesetVersion;
@property (readonly, copy, nonatomic) HRSSupportedFHIRConfiguration *supportedFHIRConfiguration;

+ (id)configurationWithError:(id *)a0;
+ (id)_bundledPipelineConfigurationWithError:(id *)a0;
+ (id)_rulesetDictionaryFromRulesetData:(id)a0 error:(id *)a1;
+ (id)configurationWithExtractionVersionOverride:(id)a0 rulesetOverrides:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)extractionRulesetForRelease:(id)a0;
- (id)initWithVersion:(id)a0 extractionRulesets:(id)a1;

@end
