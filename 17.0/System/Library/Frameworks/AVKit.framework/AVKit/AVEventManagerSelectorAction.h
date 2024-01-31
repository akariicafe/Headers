@interface AVEventManagerSelectorAction : AVEventManagerAction {
    id _target;
    SEL _selector;
    unsigned long long _parameterCount;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)sendAction:(id)a0;
- (BOOL)hasMatchingTarget:(id)a0 withSelector:(SEL)a1 forEvent:(id)a2;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 event:(id)a2;

@end
