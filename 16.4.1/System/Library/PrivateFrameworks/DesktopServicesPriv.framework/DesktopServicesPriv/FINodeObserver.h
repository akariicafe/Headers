@class FINode;

@interface FINodeObserver : NSObject {
    FINode *_observedNode;
    struct OpaqueEventNotifier { } *_notifier;
}

+ (id)propertyName:(unsigned int)a0;
+ (id)observerForFINode:(id)a0 withObserver:(id)a1;

- (void)stopObserving:(unsigned int)a0;
- (id)debugDescription;
- (void)dealloc;
- (void)startObserving:(unsigned int)a0;
- (void).cxx_destruct;

@end
