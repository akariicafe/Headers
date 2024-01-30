@interface UIStoryboardPushSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) long long destinationContainmentContext;
@property (nonatomic) long long splitViewControllerIndex;

- (id)initWithCoder:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
