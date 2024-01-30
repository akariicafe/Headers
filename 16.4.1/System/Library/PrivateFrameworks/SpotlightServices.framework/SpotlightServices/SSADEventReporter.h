@interface SSADEventReporter : NSObject

+ (void)reportBadL3Models;
+ (void)reportKey:(id)a0;
+ (void)reportBadDirectivesForModelType:(unsigned long long)a0;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)a0;
+ (void)reportBadL2Models;
+ (void)reportModelDeletionForType:(unsigned long long)a0;
+ (void)reportModelLoadingError;

@end
