@class NSString, NSDate;

@interface NDODevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *name;
@property (retain) NSString *serialNumber;
@property (retain) NSDate *activationDate;
@property unsigned long long deviceType;

+ (id)deviceWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 serialNumber:(id)a1 activationDate:(id)a2 deviceType:(unsigned long long)a3;
- (id)deviceTypeString;

@end
