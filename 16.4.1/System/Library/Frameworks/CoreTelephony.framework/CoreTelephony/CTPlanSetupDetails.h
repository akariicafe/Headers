@class NSString;

@interface CTPlanSetupDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL inBuddy;
@property (retain) NSString *carrierName;
@property unsigned long long setupType;
@property unsigned long long setupResult;
@property unsigned long long duration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInBuddy:(BOOL)a0 carrierName:(id)a1 setupType:(unsigned long long)a2 setupResult:(unsigned long long)a3 duration:(unsigned long long)a4;

@end
