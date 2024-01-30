@interface TPAlertAction : UIAlertAction

@property (copy, nonatomic) id /* block */ handler;

+ (id)actionWithType:(unsigned long long)a0;
+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (id)preferencesURLForClassName:(id)a0;

- (void).cxx_destruct;

@end
