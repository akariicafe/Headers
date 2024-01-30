@interface MKWhenSizedBlock : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL shouldRun;

- (void)perform;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 block:(id /* block */)a1;
- (id)initWithType:(long long)a0 block:(id /* block */)a1 completion:(id /* block */)a2;

@end
