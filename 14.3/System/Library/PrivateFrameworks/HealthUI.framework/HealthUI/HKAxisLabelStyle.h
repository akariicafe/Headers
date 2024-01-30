@class UIColor, UIFont;
@protocol HKNumberFormatter;

@interface HKAxisLabelStyle : NSObject <NSCopying>

@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (retain, nonatomic) id<HKNumberFormatter> numberFormatter;

+ (id)labelStyleWithColor:(id)a0 font:(id)a1 horizontalAlignment:(long long)a2 verticalAlignment:(long long)a3 numberFormatter:(id)a4;
+ (id)labelStyleWithColor:(id)a0 font:(id)a1 horizontalAlignment:(long long)a2 verticalAlignment:(long long)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
