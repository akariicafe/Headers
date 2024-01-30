@protocol HKVerticalMarginDelegate;

@interface HKVerticalMarginView : UIView

@property (nonatomic) double currentKeyboardHeight;
@property (nonatomic) unsigned long long offsetOptions;
@property (retain, nonatomic) id<HKVerticalMarginDelegate> marginDelegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithSubview:(id)a0 offsetOptions:(unsigned long long)a1;
- (void)keyboardWasShown:(id)a0;
- (void)keyboardWillBeHidden:(id)a0;
- (id)_findViewController;
- (double)_topOffsetWithController:(id)a0;
- (double)_bottomOffsetWithController:(id)a0;
- (double)_findTabBarHeightWithController:(id)a0;

@end
