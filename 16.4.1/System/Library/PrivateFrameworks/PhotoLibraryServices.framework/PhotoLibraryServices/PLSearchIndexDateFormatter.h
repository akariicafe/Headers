@class PLDateRangeFormatter, NSDateFormatter, NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLSearchIndexDateFormatter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_dateFormatter;
    PLDateRangeFormatter *_dateRangeFormatter;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_displayFormat;
    NSString *_parseFormat;
    NSArray *_monthSymbols;
    BOOL _didSetupLocaleAndFormats;
}

+ (id)monthFormatForLocale:(id)a0;
+ (id)yearFormatForLocale:(id)a0;

- (id)formattedDateRangeWithStartDate:(id)a0 endDate:(id)a1;
- (void)_inqSetupDateFormatter;
- (id)_inqNewLocalizedStringFromDate:(id)a0;
- (id)newLocalizedStringFromYear:(id)a0 month:(id)a1;
- (void)_inqUpdateDateFormat:(id)a0;
- (id)init;
- (id)newLocalizedStringFromDate:(id)a0;
- (id)newLocalizedComponentsFromDate:(id)a0 includeMonth:(BOOL)a1;
- (id)localizedSeasonNameFromDate:(id)a0;
- (void).cxx_destruct;
- (id)_arrangedMonthSymbols;
- (id)localizedMonthStringsFromDate:(id)a0;

@end
