@class _PSMetricsManagerInternal;

@interface PSMetricsManager : NSObject

@property (readonly) _PSMetricsManagerInternal *underlyingObject;

+ (void)recordWithAppInference:(id)a0;
+ (void)recordWithFeedback:(id)a0;
+ (void)recordWithPeopleInference:(id)a0;

- (void).cxx_destruct;

@end
