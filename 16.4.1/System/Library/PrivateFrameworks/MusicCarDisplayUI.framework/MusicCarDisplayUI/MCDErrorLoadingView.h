@protocol MCDErrorViewDelegate;

@interface MCDErrorLoadingView : UIView

@property (weak, nonatomic) id<MCDErrorViewDelegate> delegate;
@property (nonatomic) BOOL shouldEnableNetwork;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 buttonText:(id)a1;
- (void)retryButtonPressed:(id)a0;

@end
