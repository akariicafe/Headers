@class BNPostingContext;

@interface BNPendingDequeuePromise : NSObject {
    id /* block */ _dequeueBlock;
}

@property (readonly, nonatomic) BNPostingContext *postingContext;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)dequeue;
- (void).cxx_destruct;
- (id)initWithPostingContext:(id)a0 dequeueBlock:(id /* block */)a1;

@end
