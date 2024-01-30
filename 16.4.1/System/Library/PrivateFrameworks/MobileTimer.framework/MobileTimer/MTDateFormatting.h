@class NSString, NSDateFormatter;

@interface MTDateFormatting : NSObject {
    NSString *_amString;
    NSString *_pmString;
    NSDateFormatter *_dateOnlyFormatter;
    NSDateFormatter *_timeOnlyFormatter;
}

@property (readonly, weak, nonatomic) NSString *amString;
@property (readonly, weak, nonatomic) NSString *pmString;
@property (readonly, nonatomic) BOOL use24HourTime;
@property (readonly, nonatomic) BOOL timeDesignatorAppearsBeforeTime;

+ (id)sharedInstance;

- (id)_timeOnlyFormatter;
- (void)_loadLocaleInfo;
- (id)localizedTimeStringFromDate:(id)a0 forTimeZone:(id)a1 timeDesignator:(out id *)a2;
- (void)_clearLocaleDependentState;
- (id)localizedTimeStringFromDate:(id)a0 timeDesignator:(out id *)a1;
- (id)_dateOnlyFormatter;
- (id)timeDesignatorForDate:(id)a0 timeZone:(id)a1;
- (void)dealloc;
- (id)init;
- (id)timeDesignatorForDate:(id)a0;
- (void)_reloadLocaleInfo;
- (void).cxx_destruct;

@end
