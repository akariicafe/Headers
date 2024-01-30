@class NFUnfairLock, NSError, NSHashTable;
@protocol NFCopying, FCFetchedValueManager;

@interface FCFetchedValueObservable : NSObject

@property (readonly, weak, nonatomic) id<FCFetchedValueManager> manager;
@property (readonly, copy, nonatomic) id /* block */ equalityTest;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NFUnfairLock *lock;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) id<NFCopying> value;

- (void)handleError:(id)a0;
- (id)valueWithError:(id *)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithManager:(id)a0 initialValue:(id)a1 equalityTest:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
