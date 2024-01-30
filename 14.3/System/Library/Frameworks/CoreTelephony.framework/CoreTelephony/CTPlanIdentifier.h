@class NSString;

@interface CTPlanIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *iccid;
@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *label;

- (id)initWithIccid:(id)a0 carrierName:(id)a1 phoneNumber:(id)a2 countryCode:(id)a3 label:(id)a4;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
