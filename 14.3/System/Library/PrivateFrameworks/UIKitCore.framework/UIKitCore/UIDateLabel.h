@class UIFont, NSString, NSCalendar, NSDate;

@interface UIDateLabel : UILabel {
    NSDate *_date;
    NSDate *_yesterday;
    NSDate *_today;
    NSDate *_noon;
    NSDate *_tomorrow;
    NSDate *_previousWeek;
    NSCalendar *_calendar;
}

@property (readonly, nonatomic) BOOL use24HourTime;
@property (readonly, nonatomic) BOOL timeDesignatorAppearsBeforeTime;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } timeDesignatorSize;
@property (readonly, nonatomic, getter=_dateString) NSString *dateString;
@property (nonatomic) BOOL shouldRecomputeText;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double timeInterval;
@property (readonly, nonatomic) UIFont *timeDesignatorFont;
@property (readonly, nonatomic) NSString *timeDesignator;
@property (nonatomic) BOOL forceTimeOnly;
@property (nonatomic) BOOL boldForAllLocales;
@property (nonatomic) double paddingFromTimeToDesignator;

+ (id)_dateFormatter;
+ (id)_timeOnlyDateFormatter;
+ (id)amString;
+ (id)_relativeDateFormatter;
+ (id)pmString;
+ (id)_weekdayDateFormatter;
+ (id)defaultFont;

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)_didUpdateDate;
- (id)font;
- (void).cxx_destruct;
- (id)_dateWithDayDiffFromToday:(long long)a0;
- (id)text;
- (void)dealloc;
- (double)_today;
- (id)_todayDate;
- (void)_recomputeTextIfNecessary;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_calendar;
- (double)_tomorrow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_noon;
- (double)_lastWeek;
- (id)_stringDrawingContext;
- (void)invalidate;
- (double)_yesterday;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
