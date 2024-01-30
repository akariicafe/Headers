@class NSArray, NSSet, NSMutableSet, NSObject;

@interface REMChangedKeysObserver : NSObject

@property (retain, nonatomic) NSArray *keysToObserve;
@property (retain, nonatomic) NSMutableSet *mutableChangedKeys;
@property (readonly, nonatomic) NSObject *target;
@property (readonly, nonatomic) NSSet *changedKeys;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithTarget:(id)a0 keysToObserve:(id)a1 includeInitial:(BOOL)a2;
- (void)keyDidChange:(id)a0;

@end
