@class NSString, CTPlan;

@interface CTDisplayPlan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CTPlan *plan;
@property (readonly, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) unsigned long long attributes;
@property (readonly, nonatomic) BOOL isPhysical;

- (id)initWithPlan:(id)a0 status:(long long)a1 attributes:(unsigned long long)a2 isPhysical:(BOOL)a3 carrierName:(id)a4 phoneNumber:(id)a5 label:(id)a6;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
