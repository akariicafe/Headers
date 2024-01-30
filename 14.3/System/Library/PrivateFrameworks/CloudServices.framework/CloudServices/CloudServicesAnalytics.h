@interface CloudServicesAnalytics : SFAnalytics

+ (id)databasePath;
+ (id)logger;

- (void)logSuccessForEvent:(id)a0;
- (void)logUnrecoverableError:(id)a0 forEvent:(id)a1 withAttributes:(id)a2;

@end
