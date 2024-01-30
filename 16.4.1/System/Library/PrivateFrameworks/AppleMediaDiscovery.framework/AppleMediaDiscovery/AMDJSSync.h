@interface AMDJSSync : NSObject

+ (id)dailyDataUpdate:(id)a0 forStoreFrontId:(unsigned int)a1 error:(id *)a2;
+ (id)runSync:(id)a0 withCallUUID:(id)a1 error:(id *)a2;
+ (void)updateArcadeUsageFeature:(id *)a0;

@end
