@interface GKRecurrenceRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long interval;
@property long long frequency;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInterval:(unsigned long long)a0 frequency:(long long)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
