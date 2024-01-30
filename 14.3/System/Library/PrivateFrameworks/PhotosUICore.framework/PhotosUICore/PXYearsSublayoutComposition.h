@class PXYearsLayoutMetrics, PXYearsLayoutGenerator;

@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXYearsLayoutGenerator *_layoutGenerator;
}

@property (copy, nonatomic) PXYearsLayoutMetrics *metrics;
@property (readonly, nonatomic) long long presentedNumberOfColumns;

- (void).cxx_destruct;
- (id)configuredLayoutGenerator;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sublayoutInsetsForStylableType:(long long)a0;

@end
