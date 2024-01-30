@class NSString, HMFVersion;

@interface HMDNetworkRouterFirewallRuleAccessoryIdentifier : HMFObject <NSCopying>

@property (readonly, nonatomic) NSString *cloudKitZoneName;
@property (readonly, nonatomic) NSString *cloudKitRecordName;
@property (readonly, nonatomic) NSString *productGroup;
@property (readonly, nonatomic) NSString *productNumber;
@property (readonly, nonatomic) HMFVersion *firmwareVersion;

+ (id)createWithProductData:(id)a0 firmwareVersion:(id)a1;
+ (id)identifierFromRecordID:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)cloudKitRecordID;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2;

@end
