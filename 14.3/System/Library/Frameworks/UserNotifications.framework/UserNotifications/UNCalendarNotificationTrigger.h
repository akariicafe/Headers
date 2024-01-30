@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)a0 repeats:(BOOL)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;
- (id)_initWithDateComponents:(id)a0 repeats:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;

@end
