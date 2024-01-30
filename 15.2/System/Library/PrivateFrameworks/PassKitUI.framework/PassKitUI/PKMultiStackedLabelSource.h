@class NSString, UIFont, UIColor;

@interface PKMultiStackedLabelSource : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;

- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
