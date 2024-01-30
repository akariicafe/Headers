@protocol TSKModalShieldDelegate;

@interface TSKModalShieldView : UIView

@property (nonatomic) id<TSKModalShieldDelegate> delegate;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;

@end
