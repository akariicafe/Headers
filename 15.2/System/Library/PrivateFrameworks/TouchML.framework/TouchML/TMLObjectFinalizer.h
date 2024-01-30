@interface TMLObjectFinalizer : NSObject {
    id /* block */ _block;
}

+ (void)runBlock:(id /* block */)a0 onFinalize:(id)a1;

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
