@interface AKBasicLoginActions : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ authenticateAction;
@property (copy, nonatomic) id /* block */ ak_cancelAction;
@property (copy, nonatomic) id /* block */ createIDAction;
@property (copy, nonatomic) id /* block */ useIDAction;
@property (copy, nonatomic) id /* block */ forgotIDAction;
@property (copy, nonatomic) id /* block */ forgotPasswordAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
