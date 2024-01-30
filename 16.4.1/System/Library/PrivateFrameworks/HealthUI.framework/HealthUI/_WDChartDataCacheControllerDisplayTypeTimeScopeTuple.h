@class HKDisplayType;

@interface _WDChartDataCacheControllerDisplayTypeTimeScopeTuple : NSObject <NSCopying> {
    HKDisplayType *_displayType;
    long long _timeScope;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDisplayType:(id)a0 timeScope:(long long)a1;

@end
