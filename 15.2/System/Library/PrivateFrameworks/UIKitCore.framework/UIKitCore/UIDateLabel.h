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

+ (id)defaultFont;
+ (id)_timeOnlyDateFormatter;
+ (id)_weekdayDateFormatter;
+ (id)_dateFormatter;
+ (id)amString;
+ (id)_relativeDateFormatter;
+ (id)pmString;

- (double)_noon;
- (double)_today;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (id)_todayDate;
- (double)_lastWeek;
- (double)_yesterday;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didUpdateDate;
- (void)_recomputeTextIfNecessary;
- (id)_dateWithDayDiffFromToday:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (double)_tomorrow;
- (id)_calendar;
- (id)text;
- (void)invalidate;
- (id)font;
- (id)_stringDrawingContext;
- (void)dealloc;

@end
