@class UIColor, CLKTextProvider;

@interface REAccessoryDescription : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
