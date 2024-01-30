@class NSString;

@interface UIStoryboardShowSegueTemplate : UIStoryboardSegueTemplate

@property (copy, nonatomic) NSString *action;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;

@end
