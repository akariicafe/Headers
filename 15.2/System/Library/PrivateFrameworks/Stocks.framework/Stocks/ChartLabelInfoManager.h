@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {
    ChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    BOOL _use24hrTime;
}

+ (id)sharedLabelInfoManager;
+ (struct __CFString { } *)_CFDateFormatterPropertyForMonthLabelLength:(long long)a0;
+ (void)clearSharedManager;
+ (id)chartLabelFont;

- (void)resetLocale;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)labelInfoForYAxis;
- (BOOL)use24hrTime;
- (id)labelInfoWithUnsignedInteger:(unsigned long long)a0;
- (id)monthLabelInfoArrayForLabelLength:(long long)a0;
- (id)labelInfoWithString:(id)a0;

@end
