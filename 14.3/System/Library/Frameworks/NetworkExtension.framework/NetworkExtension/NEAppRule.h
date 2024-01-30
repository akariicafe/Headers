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

- (BOOL)matchesProcessWithAuditToken:(id)a0;
- (BOOL)signingIdentifierAllowed:(id)a0 domainsOrAccountsRequired:(out BOOL *)a1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithSigningIdentifier:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (BOOL)overlapsWithRule:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
