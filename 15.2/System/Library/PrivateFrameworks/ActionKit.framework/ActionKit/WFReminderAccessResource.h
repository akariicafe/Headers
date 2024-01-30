@interface WFReminderAccessResource : WFCalendarAccessResource

+ (unsigned long long)entityType;
+ (BOOL)isSystemResource;

- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end
