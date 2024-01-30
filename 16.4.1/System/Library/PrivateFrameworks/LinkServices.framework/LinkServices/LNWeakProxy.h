@interface LNWeakProxy : NSObject {
    id /* block */ _wrapper;
}

@property (readonly, weak, nonatomic) id value;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 wrapper:(id /* block */)a1;

@end
