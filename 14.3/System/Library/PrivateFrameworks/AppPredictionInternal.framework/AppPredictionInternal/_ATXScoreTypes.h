@interface _ATXScoreTypes : NSObject

+ (unsigned long long)mappingForTopRankedCoarseGeoHashSignals:(unsigned long long)a0 forScoreInputCategory:(unsigned long long)a1;
+ (unsigned long long)mappingForTimeOfDayDistributionSignals:(unsigned long long)a0 forScoreInputCategory:(unsigned long long)a1;
+ (id)aggdStringForScoreInput:(unsigned long long)a0;
+ (unsigned long long)mappingForTopRankedGeoHashSignalsWithResolution:(unsigned long long)a0 withRank:(unsigned long long)a1 forScoreInputCategory:(unsigned long long)a2;
+ (void)iterScoreInputsWithBlock:(id /* block */)a0;
+ (id)stringForScoreInput:(unsigned long long)a0;
+ (unsigned long long)scoreInputForString:(id)a0;
+ (id)scoreInputsToNames;
+ (unsigned long long)mappingForDayOfWeekDistributionSignals:(unsigned long long)a0 forScoreInputCategory:(unsigned long long)a1;
+ (unsigned long long)mappingForTopRankedSpecificGeoHashSignals:(unsigned long long)a0 forScoreInputCategory:(unsigned long long)a1;
+ (unsigned long long)mappingForTopRankedZoom7GeoHashSignals:(unsigned long long)a0;

@end
