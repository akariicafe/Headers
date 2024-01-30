@interface ADSignpostUtils : NSObject

+ (void)markStartMeasurement;
+ (void)markEndMeasurement;
+ (void)markStartFrame:(id)a0 mappingId:(unsigned long long)a1;
+ (void)markEndFrame:(BOOL)a0 name:(id)a1 mappingId:(unsigned long long)a2;

@end
