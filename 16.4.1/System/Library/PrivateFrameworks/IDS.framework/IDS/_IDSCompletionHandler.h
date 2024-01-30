@interface _IDSCompletionHandler : IDSDelegateInfo

@property (copy, nonatomic) id /* block */ handler;

- (id)initWithHandler:(id /* block */)a0 queue:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
