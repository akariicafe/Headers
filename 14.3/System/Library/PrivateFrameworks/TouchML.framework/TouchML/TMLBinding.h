@class NSString, NSMutableArray;

@interface TMLBinding : NSObject <TMLValue> {
    NSString *_keyPath;
    NSMutableArray *_binders;
    int _bindCount;
    int _flags;
    id _value;
    unsigned long long _valueType;
    BOOL _didAttachToTargetViaTMLObservable;
}

@property (readonly, nonatomic) id target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bindingForTarget:(id)a0 withKeyPath:(id)a1;
+ (id)bindingForTarget:(id)a0 withKeyPath:(id)a1 valueType:(unsigned long long)a2;

- (unsigned long long)valueType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)value;
- (void)bind:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)unbind:(id)a0;
- (void)unobserveTarget;
- (void)observeTarget;
- (void)tmlObserveValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithTarget:(id)a0 keyPath:(id)a1 valueType:(unsigned long long)a2;

@end
