@class NSString;

@interface HealthRecordsUI.MedicalRecordChartDataSource : HKGraphSeriesDataSource {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ concept;
    void /* unknown type, empty encoding */ dataTransformer;
    void /* unknown type, empty encoding */ chartableCodedQuantitySets;
    void /* unknown type, empty encoding */ cachedBucketedSets;
    void /* unknown type, empty encoding */ collapseIntoRangePoints;
    void /* unknown type, empty encoding */ unit;
    void /* unknown type, empty encoding */ preferredColors;
    void /* unknown type, empty encoding */ chartableXRange;
    void /* unknown type, empty encoding */ chartableYRange;
}

@property (nonatomic, readonly) NSString *displayName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConcept:(id)a0 dataTransformer:(id)a1 unit:(id)a2 preferredColors:(id)a3 collapseIntoRangePoints:(BOOL)a4 type:(long long)a5;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (id)chartDisplayTypeWithVerticalAxis:(id)a0;

@end
