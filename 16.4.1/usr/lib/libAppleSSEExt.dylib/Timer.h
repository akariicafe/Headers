@interface Timer : NSObject {
    id /* block */ _dispatchBlock;
}

- (void)cancel;
- (void)dealloc;
- (void)resetWithTimeInterval:(double)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
