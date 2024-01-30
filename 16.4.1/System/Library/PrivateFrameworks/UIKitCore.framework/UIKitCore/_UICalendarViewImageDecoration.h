@class UIImage, UIColor;

@interface _UICalendarViewImageDecoration : _UICalendarViewDecoration

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) long long size;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 accentColor:(id)a1 size:(long long)a2;
- (id)_decorationViewForReuseView:(id)a0;
- (id)_decorationViewReusableKey;
- (id)defaultImage;
- (id)initWithImage:(id)a0 color:(id)a1 size:(long long)a2;

@end
