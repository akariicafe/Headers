@class UIView;
@protocol EKUITintColorUpdateDelegate;

@interface TintColorUpdateView : UIView

@property (nonatomic) UIView<EKUITintColorUpdateDelegate> *tintColorUpdateDelegate;

- (void)tintColorDidChange;

@end
