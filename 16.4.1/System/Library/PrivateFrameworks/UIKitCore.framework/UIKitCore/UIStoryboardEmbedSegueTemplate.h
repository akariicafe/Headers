@class UIView;

@interface UIStoryboardEmbedSegueTemplate : UIStoryboardSegueTemplate

@property (retain, nonatomic) UIView *containerView;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;

@end
