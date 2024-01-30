@class UIView;

@interface _UICalendarViewDecoration : NSObject <_UICalendarViewDecorationProviding>

@property (retain, nonatomic, setter=_setDecorationView:) UIView *_decorationView;

- (void).cxx_destruct;
- (id)_decorationViewForReuseView:(id)a0;
- (id)_decorationViewReusableKey;

@end
