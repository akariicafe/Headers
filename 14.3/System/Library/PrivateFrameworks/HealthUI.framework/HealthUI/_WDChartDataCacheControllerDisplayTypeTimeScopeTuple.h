@class HKDisplayType;

@interface _WDChartDataCacheControllerDisplayTypeTimeScopeTuple : NSObject <NSCopying> {
    HKDisplayType *_displayType;
    long long _timeScope;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplayType:(id)a0 timeScope:(long long)a1;

@end
