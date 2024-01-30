@interface HMFObjectObserver : HMFObject

@property (readonly) unsigned long long cachedHash;
@property (readonly, weak) id observedObject;
@property (copy) id /* block */ deallocationBlock;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (void)_startObserving;
- (BOOL)isEqual:(id)a0;
- (void)_stopObserving;
- (id)initWithObservedObject:(id)a0;

@end
