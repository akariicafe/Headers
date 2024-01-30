@class NSDate;

@interface CLFindMyAccessoryWildConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *desiredKeyRollDate;
@property (readonly) unsigned int keyRollInterval;
@property (readonly) unsigned short keysRemaining;
@property (readonly) unsigned short keyCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)encodeConfiguration;
- (id)initWithDesiredNextKeyRollDate:(id)a0 keyRollInterval:(unsigned int)a1 keysRemainingInWildPeriod:(unsigned short)a2 wildPeriodKeyCount:(unsigned short)a3;

@end
