@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {
    ChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    BOOL _use24hrTime;
}

+ (id)sharedLabelInfoManager;
+ (void)clearSharedManager;
+ (struct __CFString { } *)_CFDateFormatterPropertyForMonthLabelLength:(long long)a0;
+ (id)chartLabelFont;

- (void)resetLocale;
- (id)init;
- (void).cxx_destruct;
- (id)labelInfoForYAxis;
- (BOOL)use24hrTime;
- (id)labelInfoWithUnsignedInteger:(unsigned long long)a0;
- (void)dealloc;
- (id)monthLabelInfoArrayForLabelLength:(long long)a0;
- (id)labelInfoWithString:(id)a0;

@end
