@class NSArray;

@interface NEOnDemandRuleEvaluateConnection : NEOnDemandRule

@property (copy) NSArray *connectionRules;

+ (BOOL)supportsSecureCoding;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyLegacyDictionary;

@end
