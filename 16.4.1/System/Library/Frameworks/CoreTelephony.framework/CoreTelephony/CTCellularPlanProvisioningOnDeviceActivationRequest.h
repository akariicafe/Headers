@class NSString;

@interface CTCellularPlanProvisioningOnDeviceActivationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *eid;
@property (retain, nonatomic) NSString *iccid;
@property (retain, nonatomic) NSString *sourceIccid;
@property (retain, nonatomic) NSString *unusableIccid;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *mcc;
@property (retain, nonatomic) NSString *mnc;
@property (retain, nonatomic) NSString *gid1;
@property (retain, nonatomic) NSString *gid2;
@property (retain, nonatomic) NSString *smdpAddress;
@property (nonatomic) BOOL useDS;
@property (nonatomic) BOOL isESim;
@property (retain, nonatomic) NSString *flowType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDetails:(id)a0 installIccid:(id)a1 sourceIccid:(id)a2 unusableIccid:(id)a3 phoneNumber:(id)a4 mcc:(id)a5 mnc:(id)a6 gid1:(id)a7 gid2:(id)a8 smdp:(id)a9 useDS:(BOOL)a10 esim:(BOOL)a11;
- (id)initWithDetails:(id)a0 installIccid:(id)a1 sourceIccid:(id)a2 unusableIccid:(id)a3 phoneNumber:(id)a4 mcc:(id)a5 mnc:(id)a6 gid1:(id)a7 gid2:(id)a8 smdp:(id)a9 useDS:(BOOL)a10 esim:(BOOL)a11 flowType:(id)a12;
- (id)initWithEid:(id)a0 installIccid:(id)a1 sourceIccid:(id)a2 phoneNumber:(id)a3 mcc:(id)a4 mnc:(id)a5 gid1:(id)a6 gid2:(id)a7 smdp:(id)a8 useDS:(BOOL)a9 esim:(BOOL)a10;

@end
