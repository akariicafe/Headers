@protocol UIViewWindowListener;

@interface UIViewWindowNotifier : UIView

@property (weak, nonatomic) id<UIViewWindowListener> windowListener;

- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;

@end
