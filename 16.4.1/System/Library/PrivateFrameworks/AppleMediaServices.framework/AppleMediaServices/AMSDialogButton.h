@class NSString;

@interface AMSDialogButton : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;

+ (id)buttonWithTitle:(id)a0 handler:(id /* block */)a1;
+ (id)buttonWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

@end
