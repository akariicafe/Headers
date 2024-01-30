@class HDAssertion;

@interface HDSessionAssertionWrapper : NSObject {
    HDAssertion *_currentAssertion;
}

@property (readonly, copy, nonatomic) id /* block */ createAndTakeBlock;
@property (readonly, nonatomic) BOOL taken;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_releaseAssertion;
- (id)initWithCreateAndTakeBlock:(id /* block */)a0;
- (void)_takeAssertion;

@end
