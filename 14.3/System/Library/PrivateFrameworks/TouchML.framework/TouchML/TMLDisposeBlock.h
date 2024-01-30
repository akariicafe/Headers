@interface TMLDisposeBlock : NSObject {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)tmlDispose;

@end
