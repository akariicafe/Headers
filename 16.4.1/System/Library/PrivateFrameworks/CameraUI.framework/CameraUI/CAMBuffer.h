@class NSMutableDictionary, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, NSCopying;

@interface CAMBuffer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_bufferQueue;
@property (nonatomic, getter=isBufferQueueEnabled) BOOL bufferQueueEnabled;
@property (retain, nonatomic) id<NSCopying> bufferQueueCurrentValue;
@property (readonly, nonatomic) NSMutableArray *_bufferQueueBufferedValues;
@property (readonly, nonatomic) NSMutableDictionary *_bufferQueueObservers;
@property (readonly, nonatomic) NSMutableArray *_bufferQueueObservances;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) id currentValue;
@property (readonly, nonatomic) BOOL isBufferEmpty;
@property (readonly, nonatomic) id firstBufferedValue;
@property (readonly, nonatomic) id lastBufferedValue;
@property (readonly, nonatomic) NSArray *bufferedValues;

+ (id)keyPathsForValuesAffectingEnabled;
+ (id)keyPathsForValuesAffectingCurrentValue;

- (void)reevaluate;
- (id)addObserver:(id /* block */)a0;
- (void)removeObserverForKey:(id)a0;
- (void)dealloc;
- (void)push:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)_bufferQueueTeardownObservance:(id)a0;
- (void)_bufferQueueEvaluateObservances;
- (id)_addObserver:(id /* block */)a0 onMainQueue:(BOOL)a1;
- (void)_bufferQueueFulfillAndEvaluateWithChange:(id)a0;
- (void)_bufferQueueFulfillObservancesWithChange:(id)a0;
- (void)_bufferQueueSetupObservance:(id)a0;
- (void)_bufferQueueTeardownObservances:(id)a0;
- (void)_emitBufferedValues;
- (BOOL)_isBufferQueue;
- (id)addMainQueueObserver:(id /* block */)a0;
- (void)disableUntil:(id /* block */)a0;
- (void)disableUntilKeyPath:(id)a0 ofObject:(id)a1 evaluates:(id /* block */)a2;
- (void)disableUntilNotification:(id)a0 fromObject:(id)a1 usingNotificationCenter:(id)a2;
- (void)disableWhile:(id /* block */)a0;
- (void)disableWhileKeyPath:(id)a0 ofObject:(id)a1 evaluates:(id /* block */)a2;
- (void)disableWhileNotification:(id)a0 fromObject:(id)a1 usingNotificationCenter:(id)a2;
- (void)handleObservedNotification:(id)a0;
- (void)replaceWith:(id)a0;

@end
