@protocol EKLayoutContainerViewDelegate;

@interface EKLayoutContainerView : UIView

@property (weak, nonatomic) id<EKLayoutContainerViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
