@class _UICalendarViewDecoration, UIView;

@interface UICalendarViewDecoration : NSObject <_UICalendarViewDecorationProviding> {
    _UICalendarViewDecoration *_decoration;
}

@property (retain, nonatomic, setter=_setDecorationView:) UIView *_decorationView;

+ (id)decorationWithImage:(id)a0 color:(id)a1 size:(long long)a2;
+ (double)_referenceHeightForTraitCollection:(id)a0;
+ (id)decorationWithColor:(id)a0 size:(long long)a1;
+ (id)decorationWithCustomViewProvider:(id /* block */)a0;
+ (id)decorationWithImage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_decorationViewForReuseView:(id)a0;
- (id)_decorationViewReusableKey;
- (id)initWithCustomViewProvider:(id /* block */)a0;
- (id)initWithDecoration:(id)a0;
- (id)initWithImage:(id)a0 color:(id)a1 size:(long long)a2;

@end
