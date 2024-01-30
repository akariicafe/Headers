@interface BlockDeallocator : NSObject {
    id /* block */ _block;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;

@end
