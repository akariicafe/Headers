@class UIColor, CLKTextProvider;

@interface REAccessoryDescription : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) CLKTextProvider *textProvider;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
