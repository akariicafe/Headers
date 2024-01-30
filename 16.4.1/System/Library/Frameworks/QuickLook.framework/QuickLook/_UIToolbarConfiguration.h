@class UIImage, UIColor;

@interface _UIToolbarConfiguration : NSObject <NSCopying>

@property (nonatomic) long long barStyle;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *barTintColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
