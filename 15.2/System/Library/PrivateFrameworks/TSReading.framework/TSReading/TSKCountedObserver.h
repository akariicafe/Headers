@class TSUWeakReference;

@interface TSKCountedObserver : NSObject {
    TSUWeakReference *mWeakObserver;
    unsigned long long mCount;
}

- (id)observer;
- (id)initWithObserver:(id)a0;
- (unsigned long long)incrementCount;
- (void)dealloc;
- (unsigned long long)decrementCount;

@end
