@class NSArray;

@interface NEVPNApp : NEVPN

@property (copy) NSArray *appRules;
@property BOOL noRestriction;
@property BOOL restrictDomains;
@property (copy) NSArray *excludedDomains;

+ (BOOL)supportsSecureCoding;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)copyAppRuleIDs;
- (id)copyAppRuleByID:(id)a0;
- (id)copyUniqueSigningIdentifiers;
- (id)copyAppRuleBySigningIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)installSigningIdentifiersWithFlowDivertControlSocket:(int)a0;
- (void)updateAppRulesForUID:(unsigned int)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyLegacyDictionary;
- (BOOL)removeAppRuleByID:(id)a0;

@end
