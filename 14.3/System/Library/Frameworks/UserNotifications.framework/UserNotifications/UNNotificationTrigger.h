@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL repeats;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;
- (id)_initWithRepeats:(BOOL)a0;
- (double)_retroactiveTriggerHysteresis;
- (id)nextTriggerDateAfterLastTriggerDate:(id)a0 withRequestedDate:(id)a1;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
