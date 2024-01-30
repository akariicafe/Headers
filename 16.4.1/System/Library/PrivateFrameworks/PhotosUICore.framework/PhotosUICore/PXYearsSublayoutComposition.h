@class PXYearsLayoutMetrics, PXYearsLayoutGenerator;

@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXYearsLayoutGenerator *_layoutGenerator;
}

@property (copy, nonatomic) PXYearsLayoutMetrics *metrics;
@property (readonly, nonatomic) long long presentedNumberOfColumns;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sublayoutInsetsForStylableType:(long long)a0;
- (id)configuredLayoutGenerator;
- (void).cxx_destruct;

@end
