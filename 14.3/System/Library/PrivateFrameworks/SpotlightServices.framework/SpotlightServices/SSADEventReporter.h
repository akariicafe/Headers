@interface SSADEventReporter : NSObject

+ (void)reportBadL2Models;
+ (void)reportBadDirectivesForModelType:(unsigned long long)a0;
+ (void)reportKey:(id)a0;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)a0;
+ (void)reportBadL3Models;
+ (void)reportModelLoadingError;
+ (void)reportModelDeletionForType:(unsigned long long)a0;

@end
