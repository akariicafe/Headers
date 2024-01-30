@class HDAssertion;

@interface HDSessionAssertionWrapper : NSObject {
    HDAssertion *_currentAssertion;
}

@property (readonly, copy, nonatomic) id /* block */ createAndTakeBlock;
@property (readonly, nonatomic) BOOL taken;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCreateAndTakeBlock:(id /* block */)a0;

@end
