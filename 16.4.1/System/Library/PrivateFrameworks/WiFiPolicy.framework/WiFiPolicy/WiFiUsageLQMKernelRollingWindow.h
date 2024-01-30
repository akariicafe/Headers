@interface WiFiUsageLQMKernelRollingWindow : NSObject

+ (void)initialize;
+ (BOOL)isOngoing;
+ (void)advanceReadingPointerOf:(unsigned long long)a0;
+ (unsigned long long)parseKernelBlobInto:(id)a0;
+ (id)kernelLQMRollingWindow:(id)a0 withReferenceWindow:(id)a1 andLqmFeatures:(id)a2;
+ (void)addSample:(id)a0 To:(id)a1;

@end
