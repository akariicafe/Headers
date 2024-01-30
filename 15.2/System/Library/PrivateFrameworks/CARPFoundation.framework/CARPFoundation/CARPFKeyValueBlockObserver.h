@class NSString;

@interface CARPFKeyValueBlockObserver : CARPFObject <CARPFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _valid;
    BOOL _observing;
}

@property (readonly, copy) NSString *keyPath;
@property (readonly, weak) id observedObject;
@property (readonly) unsigned long long options;
@property (copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)__invalidate;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithKeyPath:(id)a0 object:(id)a1 options:(unsigned long long)a2;
- (id)initWithKeyPath:(id)a0 object:(id)a1;

@end
