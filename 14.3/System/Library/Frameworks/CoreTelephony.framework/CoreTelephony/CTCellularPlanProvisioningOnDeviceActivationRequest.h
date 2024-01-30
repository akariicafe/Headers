@class NSString;

@interface CTCellularPlanProvisioningOnDeviceActivationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *eid;
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) NSString *sourceIccid;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *mcc;
@property (readonly, nonatomic) NSString *mnc;
@property (readonly, nonatomic) NSString *gid1;
@property (readonly, nonatomic) NSString *gid2;
@property (readonly, nonatomic) NSString *smdpAddress;
@property (readonly, nonatomic) BOOL useDS;
@property (readonly, nonatomic) BOOL isESim;

- (id)initWithEid:(id)a0 installIccid:(id)a1 sourceIccid:(id)a2 phoneNumber:(id)a3 mcc:(id)a4 mnc:(id)a5 gid1:(id)a6 gid2:(id)a7 smdp:(id)a8 useDS:(BOOL)a9 esim:(BOOL)a10;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
