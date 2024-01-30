@protocol CPSLayoutHelperViewDelegate;

@interface CPSLayoutHelperView : UIView

@property (weak, nonatomic) id<CPSLayoutHelperViewDelegate> layoutDelegate;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;

@end
