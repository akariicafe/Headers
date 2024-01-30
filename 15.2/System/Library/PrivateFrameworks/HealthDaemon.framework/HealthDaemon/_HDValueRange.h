@interface _HDValueRange : NSObject

@property (nonatomic) double minimum;
@property (nonatomic) double maximum;
@property (nonatomic) BOOL isMinimumInclusive;
@property (nonatomic) BOOL isMaximumInclusive;

- (BOOL)isEqual:(id)a0;
- (BOOL)contains:(double)a0;
- (id)initWithMinimum:(double)a0 maximum:(double)a1 isMinimumInclusive:(BOOL)a2 isMaximumInclusive:(BOOL)a3;

@end
