@interface VUIRunLoopSourceRecord : NSObject

@property (copy, nonatomic) id /* block */ evaluateBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)initWithEvaluateBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;

@end
