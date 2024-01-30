@class NSPointerArray;

@interface SFChangePublisher : NSObject

@property (readonly, nonatomic) NSPointerArray *observers;

- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)publishChangeDescriptor:(unsigned long long)a0 forObservable:(id)a1;

@end
