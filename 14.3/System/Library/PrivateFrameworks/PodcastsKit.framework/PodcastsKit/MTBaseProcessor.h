@class MTBaseQueryObserver, MTDefaultsChangeNotifier, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface MTBaseProcessor : NSObject {
    BOOL _isStopping;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject *isStoppingLock;
@property (nonatomic) BOOL isStopping;
@property (retain, nonatomic) MTBaseQueryObserver *queryObserver;

+ (id)sharedInstance;
+ (void)initialize;

- (BOOL)isRunning;
- (id)entityName;
- (id)init;
- (id)predicate;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)start;
- (void)enqueueWorkBlock:(id /* block */)a0;
- (void)results:(id /* block */)a0;
- (void)resultsChangedWithDeletedIds:(id)a0 andInsertIds:(id)a1;
- (id)createQueryObserver;
- (double)updatePredicateDuration;
- (void)updatePredicate;
- (id)defaultPropertiesThatAffectPredicate;

@end
