@class NSString, NSSet;

@interface HDHealthRecordRulesetReferenceRule : NSObject

@property (readonly, nonatomic) long long appliesTo;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) NSSet *allowedResourceTypes;
@property (readonly, copy, nonatomic) NSSet *disallowedResourceTypes;

+ (id)referenceRulesetsForRules:(id)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 allowedTypes:(id)a1 disallowedTypes:(id)a2;

@end
