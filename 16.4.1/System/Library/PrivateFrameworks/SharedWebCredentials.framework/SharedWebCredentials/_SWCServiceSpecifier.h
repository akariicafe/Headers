@class NSString, _SWCApplicationIdentifier, _SWCDomain, NSNumber;

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *applicationIdentifierPrefix;
@property (readonly, getter=isDomainWildcard) BOOL domainWildcard;
@property (readonly) NSString *domainHost;
@property (readonly) NSNumber *domainPort;
@property (readonly) char domainModeOfOperation;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) _SWCApplicationIdentifier *SWCApplicationIdentifier;
@property (readonly) _SWCDomain *SWCDomain;
@property (readonly, getter=isFullySpecified) BOOL fullySpecified;
@property (readonly) NSString *serviceType;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSString *domain;

+ (id)_serviceSpecifiersWithEntitlementValue:(id)a0 serviceType:(id)a1 error:(id *)a2;
+ (id)serviceSpecifiersWithEntitlementValue:(id)a0 serviceType:(id)a1 error:(id *)a2;
+ (id)serviceSpecifiersWithEntitlementValue:(id)a0 error:(id *)a1;

- (id)domain;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applicationIdentifier;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithServiceType:(id)a0 applicationIdentifier:(id)a1 domain:(id)a2;
- (id)_initWithServiceType:(id)a0 applicationIdentifier:(id)a1 domain:(id)a2;
- (BOOL)domainEncompassesDomain:(id)a0;
- (BOOL)domainEncompassesDomainOfServiceSpecifier:(id)a0;

@end
