@interface BEAlertAction : UIAlertAction

@property (nonatomic) long long tag;
@property (copy, nonatomic) id /* block */ actionHandler;

- (void)doActionHandler;
- (id)initWithTitle:(id)a0 style:(long long)a1 tag:(long long)a2 action:(id /* block */)a3;
- (void).cxx_destruct;

@end
