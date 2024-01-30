@interface Invalidation : NSObject {
    id /* block */ _block;
}

- (void)invoke;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
