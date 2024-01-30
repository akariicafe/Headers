@interface CloudServicesAnalytics : SFAnalytics

+ (id)logger;
+ (id)databasePath;

- (void)logUnrecoverableError:(id)a0 forEvent:(id)a1 withAttributes:(id)a2;
- (void)logSuccessForEvent:(id)a0;

@end
