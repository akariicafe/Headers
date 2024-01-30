@class NSString;

@interface TIAggdReporter : NSObject <TIAggdReporting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setSharedAggdReporter:(id)a0;
+ (id)sharedAggdReporter;
+ (id)getDefaultSoftwareLayout;
+ (id)singletonInstance;

- (void)clearDistributionKey:(id)a0;
- (int)commit;
- (void)addValue:(long long)a0 forKey:(id)a1;
- (void)pushValue:(double)a0 forKey:(id)a1;
- (void)clearScalarKey:(id)a0;
- (void)decrementKey:(id)a0;
- (void)setValue:(double)a0 forDistributionKey:(id)a1;
- (void)incrementKey:(id)a0;
- (void)significantTimeChanged;
- (void)setValue:(long long)a0 forScalarKey:(id)a1;
- (void)subtractValue:(long long)a0 forKey:(id)a1;

@end
