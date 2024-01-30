@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)a0 repeats:(BOOL)a1;

- (id)nextTriggerDate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithDateComponents:(id)a0 repeats:(BOOL)a1;
- (unsigned long long)hash;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
