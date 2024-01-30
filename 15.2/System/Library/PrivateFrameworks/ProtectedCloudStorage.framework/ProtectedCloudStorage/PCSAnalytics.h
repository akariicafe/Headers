@interface PCSAnalytics : SFAnalytics

+ (id)logger;
+ (id)databasePath;

- (void)logRecoverableError:(id)a0 forEvent:(id)a1 withAttributes:(id)a2;
- (void)noteEvent:(id)a0;
- (id)dateOfLastSuccessForEvent:(id)a0;
- (void)logSuccessForEvent:(id)a0;
- (void)logUnrecoverableError:(id)a0 forEvent:(id)a1 withAttributes:(id)a2;

@end
