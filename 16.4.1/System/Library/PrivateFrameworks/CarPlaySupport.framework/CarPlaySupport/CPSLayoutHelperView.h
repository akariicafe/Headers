@protocol CPSLayoutHelperViewDelegate;

@interface CPSLayoutHelperView : UIView

@property (weak, nonatomic) id<CPSLayoutHelperViewDelegate> layoutDelegate;

- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
