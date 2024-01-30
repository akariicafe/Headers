@interface WFReminderAccessResource : WFCalendarAccessResource

+ (unsigned long long)entityType;
+ (BOOL)isSystemResource;

- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;

@end
