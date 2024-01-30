@protocol EKLayoutContainerViewDelegate;

@interface EKLayoutContainerView : UIView

@property (weak, nonatomic) id<EKLayoutContainerViewDelegate> delegate;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
