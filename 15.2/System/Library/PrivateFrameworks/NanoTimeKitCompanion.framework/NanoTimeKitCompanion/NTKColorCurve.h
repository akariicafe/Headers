@class NSArray;

@interface NTKColorCurve : NSObject

@property (readonly, nonatomic) NSArray *colorCurveElements;

- (void).cxx_destruct;
- (id)initWithColorCurveElements:(id)a0;
- (id)colorForFraction:(float)a0;

@end
