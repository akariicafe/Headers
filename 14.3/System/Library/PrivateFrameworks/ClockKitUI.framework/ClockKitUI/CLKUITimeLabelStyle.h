@class CLKFont;

@interface CLKUITimeLabelStyle : NSObject <NSCopying>

@property (retain, nonatomic) CLKFont *threeDigitFont;
@property (retain, nonatomic) CLKFont *fourDigitFont;
@property (retain, nonatomic) CLKFont *designatorFont;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
