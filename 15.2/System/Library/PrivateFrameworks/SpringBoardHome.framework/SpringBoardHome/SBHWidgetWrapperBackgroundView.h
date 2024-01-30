@class UIView;

@interface SBHWidgetWrapperBackgroundView : UIView

@property (readonly, nonatomic) UIView *underlyingBackgroundView;
@property (readonly, nonatomic) UIView *widgetBackgroundView;

- (void).cxx_destruct;
- (id)initWithUnderlyingBackgroundView:(id)a0 widgetBackgroundView:(id)a1;

@end
