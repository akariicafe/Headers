@interface GEOAnalyticsPipelineFuzzers : NSObject

+ (double)fuzzTime:(double)a0 bySeconds:(unsigned int)a1;
+ (double)fuzzParkedCarTimestamp:(double)a0;
+ (id)twoDecimalLocation:(id)a0;
+ (double)dayResolution:(double)a0;
+ (unsigned int)fuzzCount:(unsigned int)a0 forDailyUsageType:(unsigned int)a1;

@end
