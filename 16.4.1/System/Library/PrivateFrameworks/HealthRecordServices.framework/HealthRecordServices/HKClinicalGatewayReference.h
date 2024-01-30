@class HKFHIRVersion, NSString;

@interface HKClinicalGatewayReference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion;
@property (readonly, copy, nonatomic) NSString *gatewayID;
@property (readonly, copy, nonatomic) NSString *gatewayBatchID;
@property (readonly, nonatomic) long long minCompatibleAPIVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithGatewayID:(id)a0 gatewayBatchID:(id)a1 minCompatibleAPIVersion:(long long)a2 FHIRVersion:(id)a3;

@end
