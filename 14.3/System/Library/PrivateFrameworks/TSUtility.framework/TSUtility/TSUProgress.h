@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSUProgress : NSObject {
    NSMutableSet *mProgressObservers;
    NSObject<OS_dispatch_queue> *mProgressObserversQueue;
}

@property (readonly) double value;
@property (readonly) double maxValue;
@property (readonly, getter=isIndeterminate) BOOL indeterminate;
@property (copy) NSString *message;

- (id)init;
- (void)dealloc;
- (void)removeProgressObserver:(id)a0;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)protected_progressDidChange;
- (BOOL)protected_hasProgressObservers;
- (double)protected_minProgressObserverValueInterval;

@end
