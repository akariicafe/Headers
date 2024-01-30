@protocol SFAutomaticPasswordScrollViewContentViewLayoutObserver;

@interface SFAutomaticPasswordScrollViewContentView : UIView

@property (weak, nonatomic) id<SFAutomaticPasswordScrollViewContentViewLayoutObserver> layoutObserver;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
