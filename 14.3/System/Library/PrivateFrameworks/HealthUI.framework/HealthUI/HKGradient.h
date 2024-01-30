@class NSArray, UIColor;

@interface HKGradient : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *locations;
@property (readonly, nonatomic) UIColor *topColor;
@property (readonly, nonatomic) UIColor *bottomColor;

+ (id)defaultGradient;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithTopColor:(id)a0 bottomColor:(id)a1;
- (id)initWithColors:(id)a0 locations:(id)a1;
- (BOOL)isEqualToHKGradient:(id)a0;

@end
