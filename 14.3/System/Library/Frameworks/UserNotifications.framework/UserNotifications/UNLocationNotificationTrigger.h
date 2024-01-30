@class CLRegion;

@interface UNLocationNotificationTrigger : UNNotificationTrigger

@property (readonly, copy, nonatomic) CLRegion *region;

+ (id)triggerWithRegion:(id)a0 repeats:(BOOL)a1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;
- (id)_initWithRegion:(id)a0 repeats:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;

@end
