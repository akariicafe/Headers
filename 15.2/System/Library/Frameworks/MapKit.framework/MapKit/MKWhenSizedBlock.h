@interface MKWhenSizedBlock : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL shouldRun;

- (void).cxx_destruct;
- (void)perform;
- (id)initWithType:(long long)a0 block:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithType:(long long)a0 block:(id /* block */)a1;

@end
