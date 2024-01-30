@class NSData, NSNumber, CIFilter;

@interface _NURAWToneCurveProperties : NSObject {
    NSData *_boostCurveData;
    NSData *_aggregateCurveData;
    NSNumber *_gainMapExposure;
    CIFilter *_rawTRCFilter;
    CIFilter *_rawGainTableMapFilter;
}

- (void).cxx_destruct;
- (float)boostCurveValueAt:(float)a0;
- (float)inverseAggregatedCurveValueAt:(float)a0;
- (float)_curveValueAt:(float)a0 data:(id)a1;
- (id)_generateCurveDataFromFilters:(id)a0 sampleCount:(unsigned long long)a1;
- (id)_generateGainMapExposure;
- (float)_inverseCurveValueAt:(float)a0 data:(id)a1;
- (id)aggregateCurveData;
- (id)boostCurveData;
- (id)initWithToneCurveFilter:(id)a0 gainMapTableFilter:(id)a1;

@end
