@class NSObject, NSMapTable, NSMutableSet;
@protocol SKUIMediaQueryDelegate, OS_dispatch_source;

@interface SKUIMediaQueryEvaluator : NSObject {
    NSMapTable *_cachedFeatureResults;
    NSMutableSet *_observedNotificationNames;
    NSObject<OS_dispatch_source> *_reloadTimer;
}

@property (weak, nonatomic) id<SKUIMediaQueryDelegate> delegate;

+ (void)initialize;
+ (void)registerFeatureClass:(Class)a0;

- (void)reloadData;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_delegateValuesForKeys:(id)a0;
- (void)_featureDidChangeNotification:(id)a0;
- (BOOL)evaluateMediaQuery:(id)a0;

@end
