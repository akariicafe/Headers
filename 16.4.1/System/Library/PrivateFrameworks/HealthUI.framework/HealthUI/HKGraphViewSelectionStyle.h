@class HKStrokeStyle;

@interface HKGraphViewSelectionStyle : NSObject

@property (nonatomic) double unselectedSeriesAlpha;
@property (retain, nonatomic) HKStrokeStyle *selectedPointLineStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *touchPointLineStrokeStyle;

- (void).cxx_destruct;

@end
