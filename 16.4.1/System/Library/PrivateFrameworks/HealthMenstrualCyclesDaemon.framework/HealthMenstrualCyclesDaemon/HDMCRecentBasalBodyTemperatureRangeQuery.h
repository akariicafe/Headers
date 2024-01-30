@class HDProfile;

@interface HDMCRecentBasalBodyTemperatureRangeQuery : NSObject {
    HDProfile *_profile;
    long long _sampleLimit;
    double _upperQuantileBound;
    double _lowerQuantileBound;
}

+ (id)recentRangeForAnalysisWithProfile:(id)a0;

- (void).cxx_destruct;
- (id)rangeWithError:(id *)a0;
- (id)initWithProfile:(id)a0 sampleLimit:(long long)a1 upperQuantileBound:(double)a2 lowerQuantileBound:(double)a3;

@end
