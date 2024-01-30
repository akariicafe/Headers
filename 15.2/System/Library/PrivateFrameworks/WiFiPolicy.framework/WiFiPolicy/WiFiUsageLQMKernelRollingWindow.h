@interface WiFiUsageLQMKernelRollingWindow : NSObject

+ (void)initialize;
+ (id)kernelLQMRollingWindow:(id)a0 withReferenceWindow:(id)a1 andLqmFeatures:(id)a2;
+ (unsigned long long)parseKernelBlobInto:(id)a0;
+ (void)advanceReadingPointerOf:(unsigned long long)a0;
+ (void)addSample:(id)a0 To:(id)a1;
+ (BOOL)isOngoing;

@end
