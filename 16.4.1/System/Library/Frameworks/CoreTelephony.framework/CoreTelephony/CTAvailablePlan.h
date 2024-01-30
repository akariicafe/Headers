@class NSString;

@interface CTAvailablePlan : CTPlan

@property (readonly, nonatomic) NSString *iccid;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIccid:(id)a0;

@end
