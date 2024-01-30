@interface AXAlertAction : UIAlertAction

@property (nonatomic) long long buttonIndex;

+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

@end
