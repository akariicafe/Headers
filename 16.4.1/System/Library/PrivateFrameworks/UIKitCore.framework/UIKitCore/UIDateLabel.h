@class UIFont, NSString, NSCalendar, NSDate;

@interface UIDateLabel : UILabel {
    NSDate *_date;
    NSDate *_yesterday;
    NSDate *_today;
    NSDate *_noon;
    NSDate *_tomorrow;
    NSDate *_weekdayFormatCutoff;
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

+ (id)amString;
+ (id)defaultFont;
+ (id)_dateFormatter;
+ (id)pmString;
+ (id)_relativeDateFormatter;
+ (id)_timeOnlyDateFormatter;
+ (id)_weekdayDateFormatter;

- (id)font;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)text;
- (double)_tomorrow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)_calendar;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_dateWithDayDiffFromToday:(long long)a0;
- (void)_didUpdateDate;
- (double)_noon;
- (void)_recomputeTextIfNecessary;
- (id)_stringDrawingContext;
- (double)_today;
- (id)_todayDate;
- (double)_weekdayFormatCutoff;
- (double)_yesterday;

@end
