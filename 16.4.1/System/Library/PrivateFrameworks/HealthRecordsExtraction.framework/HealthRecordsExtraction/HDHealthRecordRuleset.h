@class NSString, NSDictionary, NSNumber, HRSSupportedFHIRRelease;

@interface HDHealthRecordRuleset : NSObject

@property (copy, nonatomic) NSDictionary *rulesByResourceType;
@property (copy, nonatomic) NSDictionary *rulesByClinicalType;
@property (readonly, copy, nonatomic) NSString *FHIRRelease;
@property (readonly, copy, nonatomic) NSNumber *rulesetVersion;
@property (readonly, copy, nonatomic) HRSSupportedFHIRRelease *releaseSupport;

+ (id)rulesetFromDictionary:(id)a0 rulesetVersion:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initForFHIRRelease:(id)a0 rulesetVersion:(id)a1;
- (id)rulesetForClinicalType:(long long)a0;
- (id)rulesetForFHIRResourceObject:(id)a0;
- (id)rulesetForFHIRResourceType:(id)a0;

@end
