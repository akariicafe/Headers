@interface SSADEventReporter : NSObject

+ (void)reportKey:(id)a0;
+ (void)reportModelDeletionForType:(unsigned long long)a0;
+ (void)reportBadL3Models;
+ (void)reportBadDirectivesForModelType:(unsigned long long)a0;
+ (void)reportBadL2Models;
+ (void)reportModelLoadingError;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)a0;

@end
