@class NSString, REUpNextTimer, REPriorityQueue;
@protocol REFeatureTransformerInvalidationDelegate;

@interface REFeatureTransformer : NSObject <NSCopying> {
    REPriorityQueue *_scheduledUpdates;
    REUpNextTimer *_updateTimer;
    id<REFeatureTransformerInvalidationDelegate> _invalidationDelegate;
}

@property (copy, nonatomic) NSString *name;

+ (id)functionName;
+ (BOOL)supportsInvalidation;
+ (id)customTransformerWithName:(id)a0 outputType:(unsigned long long)a1 block:(id /* block */)a2;
+ (id)hashTransform;
+ (id)maskTransformWithWidth:(unsigned long long)a0;
+ (id)bucketTransformerWithCount:(unsigned long long)a0 minValue:(id)a1 maxValue:(id)a2;
+ (BOOL)supportsPersistence;
+ (id)maskAndShiftTransformWithStartIndex:(unsigned long long)a0 endIndex:(unsigned long long)a1;
+ (id)changedTransformWithImpulseDuration:(double)a0;
+ (id)customTransformerWithName:(id)a0 outputType:(unsigned long long)a1 featureCount:(unsigned long long)a2 transformation:(id /* block */)a3;
+ (id)featureTransformerClasses;
+ (id)bucketTransformerWithBitWidth:(unsigned long long)a0;
+ (id)logTransformerWithBase:(id)a0;
+ (id)binaryTransformerWithThreshold:(id)a0;
+ (id)roundTransformer;
+ (id)changedTransform;
+ (id)recentTransformerWithCount:(unsigned long long)a0;
+ (id)customCategoricalTransformerWithName:(id)a0 block:(id /* block */)a1;
+ (id)customCategoricalTransformerWithName:(id)a0 featureCount:(unsigned long long)a1 transformation:(id /* block */)a2;

- (void)setInvalidationDelegate:(id)a0;
- (void)configureWithInvocation:(id)a0;
- (void)_invalidate;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)invalidationDelegate;
- (id)_invalidationQueue;
- (void)invalidateWithContext:(id)a0;
- (void)_invalidationQueue_scheduleInvalidation:(id)a0;
- (void)_performAndScheduleTimer;

@end
