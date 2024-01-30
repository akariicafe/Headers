@interface CoordinateApproximation : NSObject

@property double low;
@property double high;
@property double value;
@property double error;

+ (id)new;

- (id)description;

@end
