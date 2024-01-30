@protocol DBLayoutHelperViewDelegate;

@interface DBLayoutHelperView : UIView

@property (weak, nonatomic) id<DBLayoutHelperViewDelegate> layoutDelegate;

- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
