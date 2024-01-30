@class NSArray, UIColor;

@interface MKBarViewOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *fillColors;
@property (copy, nonatomic) NSArray *gradientStops;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double thickness;
@property (nonatomic) double currentAmount;
@property (nonatomic) double totalAmount;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
