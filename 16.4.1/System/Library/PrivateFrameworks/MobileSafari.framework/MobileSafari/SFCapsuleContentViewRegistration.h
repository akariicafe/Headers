@class NSMutableSet;

@interface SFCapsuleContentViewRegistration : NSObject {
    NSMutableSet *_views;
    id /* block */ _createViewBlock;
}

- (void)discardView:(id)a0;
- (void)enqueueView:(id)a0;
- (id)initWithCreateViewBlock:(id /* block */)a0;
- (id)createOrDequeueViewWithExistingView:(id)a0;
- (void).cxx_destruct;

@end
