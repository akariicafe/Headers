@class NSArray, NSString;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL noRestriction;
@property (retain) NSArray *cachedMachOUUIDs;
@property (copy) NSArray *matchAccountIdentifiers;
@property BOOL noDivertDNS;
@property (readonly) NSString *matchSigningIdentifier;
@property (readonly) NSString *matchDesignatedRequirement;
@property (copy) NSString *matchPath;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *matchTools;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)signingIdentifierAllowed:(id)a0 domainsOrAccountsRequired:(out BOOL *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSigningIdentifier:(id)a0;
- (BOOL)overlapsWithRule:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyLegacyDictionary;
- (BOOL)matchesProcessWithAuditToken:(id)a0;

@end
