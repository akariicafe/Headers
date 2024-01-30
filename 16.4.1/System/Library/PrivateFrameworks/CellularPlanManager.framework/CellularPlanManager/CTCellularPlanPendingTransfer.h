@class NSString, CTUserLabel;

@interface CTCellularPlanPendingTransfer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sourceIccid;
@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) CTUserLabel *planLabel;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) long long status;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
