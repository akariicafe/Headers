@class NSDate;

@interface SUManagedDeviceUpdateDelay : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDelayed;
@property (retain, nonatomic) NSDate *delayedStartDate;
@property (nonatomic) unsigned long long delayPeriod;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithDelay:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)delayUnit;
- (id)delayEndDate;

@end
