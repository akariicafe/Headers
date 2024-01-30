@interface CARPFObjectObserver : CARPFObject

@property (readonly) unsigned long long cachedHash;
@property (readonly, weak) id observedObject;
@property (copy) id /* block */ deallocationBlock;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)_stopObserving;
- (id)initWithObservedObject:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)_startObserving;

@end
