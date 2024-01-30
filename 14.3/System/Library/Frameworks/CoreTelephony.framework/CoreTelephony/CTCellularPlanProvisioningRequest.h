@class NSString;

@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *matchingID;
@property (retain, nonatomic) NSString *OID;
@property (retain, nonatomic) NSString *confirmationCode;
@property (retain, nonatomic) NSString *ICCID;
@property (retain, nonatomic) NSString *EID;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
