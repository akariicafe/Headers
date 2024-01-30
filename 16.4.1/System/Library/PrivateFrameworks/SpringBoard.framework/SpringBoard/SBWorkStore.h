@class NSArray, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SBWorkStore : NSObject {
    NSMutableArray *_keysWithWork;
    NSMutableDictionary *_workExpirationPeriods;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *workItemsPerKey;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly, nonatomic) unsigned long long maxWorkPerKey;
@property (readonly, nonatomic) NSArray *keysWithWork;
@property (nonatomic) double defaultWorkExpirationPeriod;

- (void)addObserver:(id)a0;
- (id)debugDescription;
- (void)removeObserver:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setWorkExpirationPeriod:(double)a0 forKey:(id)a1;
- (void)_notifyObserversWorkDidChange;
- (void)_workQueue_expireWorkForKey:(id)a0;
- (void)addWorkItem:(id)a0 forKey:(id)a1;
- (id)dequeueWorkForKey:(id)a0;
- (id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned long long)a0;
- (void)purgeWorkForKey:(id)a0;

@end
