@interface MTMPULayoutInterpolator : NSObject <NSCopying> {
    struct vector<MTMPU::LayoutInterpolator::EntriesContainer, std::allocator<MTMPU::LayoutInterpolator::EntriesContainer>> { struct EntriesContainer *__begin_; struct EntriesContainer *__end_; struct __compressed_pair<MTMPU::LayoutInterpolator::EntriesContainer *, std::allocator<MTMPU::LayoutInterpolator::EntriesContainer>> { struct EntriesContainer *__value_; } __end_cap_; } _entriesContainers;
    BOOL _hasEntryWithSpecificSecondaryReferenceMetric;
}

- (void)addValue:(double)a0 forReferenceMetric:(double)a1;
- (id)description;
- (void).cxx_destruct;
- (struct Point3D { double x0; double x1; double x2; })_pointForEntry:(struct Entry { double x0; double x1; })a0 andPrimaryReferenceMetric:(double)a1 usingFallbackSecondaryReferenceMetric:(double)a2;
- (double)_interpolatedValueForPrimaryReferenceMetric:(double)a0 secondaryReferenceMetric:(double)a1 betweenFirstEntriesContainer:(void *)a2 andSecondEntriesContainer:(void *)a3;
- (double)valueForReferenceMetric:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)valueForReferenceMetric:(double)a0 secondaryReferenceMetric:(double)a1;
- (void)addValue:(double)a0 forReferenceMetric:(double)a1 secondaryReferenceMetric:(double)a2;
- (void)_sortPointsFor3DInterpolation:(void *)a0 usingQueriedPoint:(struct Point3D { double x0; double x1; double x2; })a1;
- (id).cxx_construct;
- (struct vector<MTMPU::Point3D, std::allocator<MTMPU::Point3D>> { struct Point3D *x0; struct Point3D *x1; struct __compressed_pair<MTMPU::Point3D *, std::allocator<MTMPU::Point3D>> { struct Point3D *x0; } x2; })_sortedPointsFor3DInterpolationFromEntriesContainer:(void *)a0 usingQueriedPoint:(struct Point3D { double x0; double x1; double x2; })a1 fallbackSecondaryReferenceMetric:(double)a2;

@end
