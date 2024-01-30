@class NSString;

@interface PXErrorRecoveryOption : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;

+ (id)recoveryOptionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
- (void)_attemptRecoveryFromError:(id)a0 completionHandler:(id /* block */)a1;

@end
