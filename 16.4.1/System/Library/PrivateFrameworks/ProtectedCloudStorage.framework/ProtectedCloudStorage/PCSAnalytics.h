@interface PCSAnalytics : SFAnalytics

+ (id)logger;
+ (id)databasePath;

- (void)logUnrecoverableError:(id)a0 forEvent:(id)a1 withAttributes:(id)a2;
- (void)logRecoverableError:(id)a0 forEvent:(id)a1 withAttributes:(id)a2;
- (id)dateOfLastSuccessForEvent:(id)a0;
- (void)logSuccessForEvent:(id)a0;
- (void)noteEvent:(id)a0;

@end
