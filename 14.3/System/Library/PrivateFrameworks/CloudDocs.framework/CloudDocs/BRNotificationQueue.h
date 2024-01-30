@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_index;
    unsigned long long _dequeued;
    unsigned long long _dequeuedNotificationCount;
}

@property (readonly, nonatomic) unsigned long long count;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)_filterIndex:(id)a0;
- (id)init;
- (void)processDequeueCallbacks;
- (void)addDequeueCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (void)removeAllObjects;
- (void)dequeue:(unsigned long long)a0 block:(id /* block */)a1;
- (void)addNotification:(id)a0 asDead:(BOOL)a1;

@end
