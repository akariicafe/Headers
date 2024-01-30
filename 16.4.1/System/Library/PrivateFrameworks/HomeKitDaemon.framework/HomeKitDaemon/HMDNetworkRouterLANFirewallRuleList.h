@class NSString, NSMutableArray;

@interface HMDNetworkRouterLANFirewallRuleList : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSMutableArray *multicastBridgingRules;
@property (retain, nonatomic) NSMutableArray *staticPortRules;
@property (retain, nonatomic) NSMutableArray *dynamicPortRules;
@property (retain, nonatomic) NSMutableArray *staticICMPRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)serializeWithError:(id *)a0;
- (id)initWithMulticastBridgingRules:(id)a0 staticPortRules:(id)a1 dynamicPortRules:(id)a2 staticICMPRules:(id)a3;

@end
