@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger

@property (readonly, nonatomic) double timeInterval;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithTimeInterval:(double)a0 repeats:(BOOL)a1;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;
- (id)_initWithTimeInterval:(double)a0 repeats:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;

@end
