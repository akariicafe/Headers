@class NSString, HMDNetworkRouterFirewallRuleWAN, NSSet;

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding> {
    HMDNetworkRouterFirewallRuleWAN *_cachedWANRule;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleWAN *wanRule;
@property (readonly) NSString *name;
@property (readonly) NSSet *addresses;
@property (readonly) unsigned long long purpose;
@property (readonly) NSString *jsonWANRule;

+ (id)allowedHostForFullWANAccess;
+ (id)allowedHostsFromFirewallRuleConfiguration:(id)a0;
+ (id)allowedHostsFromJSONFirewallWANRules:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)_encodeForSPIEntitledXPCTransportWithCoder:(id)a0;
- (id)initWithJSONFirewallWANRule:(id)a0;
- (id)initWithWANRule:(id)a0;

@end
