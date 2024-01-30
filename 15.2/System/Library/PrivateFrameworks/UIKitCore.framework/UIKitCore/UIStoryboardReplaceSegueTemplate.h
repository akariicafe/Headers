@interface UIStoryboardReplaceSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) long long destinationContainmentContext;
@property (nonatomic) long long splitViewControllerIndex;

- (void)encodeWithCoder:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;
- (id)initWithCoder:(id)a0;

@end
