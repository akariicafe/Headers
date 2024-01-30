@class HKFillStyle;

@interface HKBarSeriesConfiguration : NSObject

@property (retain, nonatomic) HKFillStyle *unselectedFillStyle;
@property (retain, nonatomic) HKFillStyle *selectedFillStyle;
@property (retain, nonatomic) HKFillStyle *inactiveFillStyle;
@property (copy, nonatomic) id /* block */ isIncludedBlock;

- (void).cxx_destruct;

@end
