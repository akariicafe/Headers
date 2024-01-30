@class NSMutableSet;

@interface SFCapsuleContentViewRegistration : NSObject {
    NSMutableSet *_views;
    id /* block */ _createViewBlock;
}

- (void).cxx_destruct;
- (void)enqueueView:(id)a0;
- (id)initWithCreateViewBlock:(id /* block */)a0;
- (id)createOrDequeueViewWithExistingView:(id)a0;

@end
