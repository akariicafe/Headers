@interface Invalidation : NSObject {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)invoke;

@end
