@class UIBezierPath, HKFillStyle;

@interface HKBarSeriesConfiguration : NSObject

@property (retain, nonatomic) UIBezierPath *selectedBezierPath;
@property (retain, nonatomic) UIBezierPath *unselectedBezierPath;
@property (retain, nonatomic) HKFillStyle *unselectedFillStyle;
@property (retain, nonatomic) HKFillStyle *selectedFillStyle;
@property (copy, nonatomic) id /* block */ isIncludedBlock;

- (void).cxx_destruct;

@end
