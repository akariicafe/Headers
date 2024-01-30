@interface CRCoderUnarchiverCompletionHandler : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (weak, nonatomic) id dependency;
@property (weak, nonatomic) id value;

- (void).cxx_destruct;

@end
