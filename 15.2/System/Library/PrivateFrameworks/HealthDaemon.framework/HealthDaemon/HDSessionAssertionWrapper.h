@class HDAssertion;

@interface HDSessionAssertionWrapper : NSObject {
    HDAssertion *_currentAssertion;
}

@property (readonly, copy, nonatomic) id /* block */ createAndTakeBlock;
@property (readonly, nonatomic) BOOL taken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCreateAndTakeBlock:(id /* block */)a0;

@end
