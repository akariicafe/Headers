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
+ (id)bucketTransformerWithCount:(unsigned long long)a0 minValue:(id)a1 maxValue:(id)a2;
+ (id)customTransformerWithName:(id)a0 outputType:(unsigned long long)a1 block:(id /* block */)a2;
+ (id)hashTransform;
+ (id)maskTransformWithWidth:(unsigned long long)a0;
+ (id)binaryTransformerWithThreshold:(id)a0;
+ (id)bucketTransformerWithBitWidth:(unsigned long long)a0;
+ (id)changedTransform;
+ (id)changedTransformWithImpulseDuration:(double)a0;
+ (id)customCategoricalTransformerWithName:(id)a0 block:(id /* block */)a1;
+ (id)customCategoricalTransformerWithName:(id)a0 featureCount:(unsigned long long)a1 transformation:(id /* block */)a2;
+ (id)customTransformerWithName:(id)a0 outputType:(unsigned long long)a1 featureCount:(unsigned long long)a2 transformation:(id /* block */)a3;
+ (id)featureTransformerClasses;
+ (id)logTransformerWithBase:(id)a0;
+ (id)maskAndShiftTransformWithStartIndex:(unsigned long long)a0 endIndex:(unsigned long long)a1;
+ (id)recentTransformerWithCount:(unsigned long long)a0;
+ (id)roundTransformer;
+ (BOOL)supportsPersistence;

- (id)invalidationDelegate;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)setInvalidationDelegate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)_invalidate;
- (void).cxx_destruct;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (id)_invalidationQueue;
- (void)_invalidationQueue_scheduleInvalidation:(id)a0;
- (void)_performAndScheduleTimer;
- (void)configureWithInvocation:(id)a0;
- (void)invalidateWithContext:(id)a0;

@end
