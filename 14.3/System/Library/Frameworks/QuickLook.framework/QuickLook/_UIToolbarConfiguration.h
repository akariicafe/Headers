@class UIImage, UIColor;

@interface _UIToolbarConfiguration : NSObject <NSCopying>

@property (nonatomic) long long barStyle;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *barTintColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
