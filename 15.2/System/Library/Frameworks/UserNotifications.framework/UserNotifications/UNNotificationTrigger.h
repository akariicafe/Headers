@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL repeats;

- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterLastTriggerDate:(id)a0 withRequestedDate:(id)a1;
- (double)_retroactiveTriggerHysteresis;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithRepeats:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
