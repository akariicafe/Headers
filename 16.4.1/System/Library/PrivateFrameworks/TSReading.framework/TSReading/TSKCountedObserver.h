@class TSUWeakReference;

@interface TSKCountedObserver : NSObject {
    TSUWeakReference *mWeakObserver;
    unsigned long long mCount;
}

- (id)observer;
- (id)initWithObserver:(id)a0;
- (void)dealloc;
- (unsigned long long)incrementCount;
- (unsigned long long)decrementCount;

@end
