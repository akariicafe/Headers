@class NSDate;

@interface SUManagedDeviceUpdateDelay : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDelayed;
@property (retain, nonatomic) NSDate *delayedStartDate;
@property (nonatomic) unsigned long long delayPeriod;

- (void)encodeWithCoder:(id)a0;
- (id)delayEndDate;
- (id)description;
- (unsigned long long)delayUnit;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDelay:(id)a0;
- (void)dealloc;

@end
