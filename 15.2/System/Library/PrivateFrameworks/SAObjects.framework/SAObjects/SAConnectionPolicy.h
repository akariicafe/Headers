@class NSNumber, NSString, NSArray;

@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *disableMPTCP;
@property (copy, nonatomic) NSNumber *enableOptimisticDNS;
@property (copy, nonatomic) NSNumber *enableTLS13;
@property (copy, nonatomic) NSNumber *enableTLS13ZeroRTT;
@property (copy, nonatomic) NSNumber *enableTcpFastOpen;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSNumber *globalTimeout;
@property (copy, nonatomic) NSNumber *mptcpFallbackPort;
@property (copy, nonatomic) NSString *policyId;
@property (copy, nonatomic) NSArray *routes;
@property (copy, nonatomic) NSNumber *timeToLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionPolicy;
+ (id)connectionPolicyWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
