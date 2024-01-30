@interface CTSimSetupUsage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL inBuddy;
@property unsigned long long transferablePlans;
@property unsigned long long selectedTransferablePlans;
@property unsigned long long alsPlans;
@property unsigned long long selectedAlsPlans;
@property unsigned long long odaPlans;

- (id)initWithInBuddy:(BOOL)a0 transferablePlans:(unsigned long long)a1 selectedTransferablePlans:(unsigned long long)a2 alsPlans:(unsigned long long)a3 selectedAlsPlans:(unsigned long long)a4 odaPlans:(unsigned long long)a5;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
