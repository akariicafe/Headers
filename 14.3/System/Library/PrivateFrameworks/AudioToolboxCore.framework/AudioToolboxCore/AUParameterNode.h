@class NSString, AUParameterGroup;

@interface AUParameterNode : NSObject

@property (copy, nonatomic) id /* block */ implementorValueObserver;
@property (copy, nonatomic) id /* block */ implementorValueProvider;
@property (copy, nonatomic) id /* block */ implementorStringFromValueCallback;
@property (copy, nonatomic) id /* block */ implementorValueFromStringCallback;
@property (copy, nonatomic) id /* block */ implementorDisplayNameWithLengthCallback;
@property (nonatomic) unsigned long long indexInGroup;
@property (weak, nonatomic) AUParameterGroup *parentNode;
@property (nonatomic) struct AUObserverList { struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver **x0; struct AULocalParameterObserver **x1; struct __compressed_pair<AULocalParameterObserver **, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver **x0; } x2; } x0; } *observerList;
@property (copy, nonatomic) id /* block */ impl_implementorValueObserver;
@property (copy, nonatomic) id /* block */ impl_implementorValueProvider;
@property (copy, nonatomic) id /* block */ impl_implementorStringFromValueCallback;
@property (copy, nonatomic) id /* block */ impl_implementorValueFromStringCallback;
@property (copy, nonatomic) id /* block */ impl_implementorDisplayNameWithLengthCallback;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) NSString *displayName;

- (BOOL)isGroup;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 name:(id)a1;
- (id)copyNodeWithOffset:(unsigned long long)a0;
- (id)_rootParent;
- (void)_walkTree:(int)a0 callback:(id /* block */)a1;
- (void)_observersChanged:(BOOL)a0 deltaCount:(int)a1;
- (void *)tokenByAddingParameterObserver:(id /* block */)a0;
- (void *)_addRecObserver:(id /* block */)a0 autoObserver:(id /* block */)a1;
- (id)displayNameWithLength:(long long)a0;
- (void *)tokenByAddingParameterRecordingObserver:(id /* block */)a0;
- (void *)tokenByAddingParameterAutomationObserver:(id /* block */)a0;
- (void)removeParameterObserver:(void *)a0;
- (void)_deserialize:(struct CADeserializer { struct __CFData *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a0 fromSetFullState:(BOOL)a1;
- (void)dealloc;
- (id)description;
- (void)_serialize:(struct CASerializer { struct __CFData *x0; } *)a0;

@end
