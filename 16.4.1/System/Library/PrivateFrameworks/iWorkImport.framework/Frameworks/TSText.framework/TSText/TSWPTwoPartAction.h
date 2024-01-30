@interface TSWPTwoPartAction : NSObject {
    id /* block */ _startAction;
    id /* block */ _cancelAction;
    id /* block */ _finishAction;
}

@property (nonatomic) BOOL performImmediately;

+ (id)actionWithStartAction:(id /* block */)a0 cancelAction:(id /* block */)a1 finishAction:(id /* block */)a2;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithStartAction:(id /* block */)a0 cancelAction:(id /* block */)a1 finishAction:(id /* block */)a2;
- (void)performFinishAction;
- (void)performStartAction;

@end
