@class UIColor, UIFont;

@interface PRXTextStyleDefinition : NSObject

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) long long numberOfLines;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic) unsigned long long accessibilityTraits;

- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;

@end
