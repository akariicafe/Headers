@class UIColor, UIImageView;

@interface LPCaptionBarAccessoryView : LPComponentView {
    long long _type;
    UIColor *_color;
    UIImageView *_accessoryView;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (id)init;
- (void).cxx_destruct;
- (void)layoutComponentView;
- (id)_createImageViewWithImage:(id)a0;
- (id)ensureAccessoryView;
- (id)initWithType:(long long)a0 side:(long long)a1;

@end
