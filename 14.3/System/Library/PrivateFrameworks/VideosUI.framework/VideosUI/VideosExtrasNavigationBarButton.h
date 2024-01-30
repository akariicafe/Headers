@class UIColor, UIView;

@interface VideosExtrasNavigationBarButton : UIButton {
    UIView *_backdropView;
    UIColor *_dodgeColor;
}

+ (id)extrasNavigationButton:(long long)a0;
+ (id)textDodgeColor;
+ (id)textFilter;
+ (id)extrasBackButton:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
