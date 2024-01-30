@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger

@property (readonly, nonatomic) double timeInterval;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithTimeInterval:(double)a0 repeats:(BOOL)a1;

- (id)nextTriggerDate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithTimeInterval:(double)a0 repeats:(BOOL)a1;
- (unsigned long long)hash;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
