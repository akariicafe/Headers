@class UIColor, UIImageView;

@interface LPCaptionBarAccessoryView : LPComponentView {
    long long _type;
    UIColor *_color;
    UIImageView *_accessoryView;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (id)initWithHost:(id)a0;
- (void).cxx_destruct;
- (id)_createImageViewWithImage:(id)a0;
- (id)ensureAccessoryView;
- (id)initWithHost:(id)a0 type:(long long)a1 side:(long long)a2;
- (void)layoutComponentView;

@end
