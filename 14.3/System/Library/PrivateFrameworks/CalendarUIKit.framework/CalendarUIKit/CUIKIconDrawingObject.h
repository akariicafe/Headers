@class NSString, NSCalendar, UIFont;

@interface CUIKIconDrawingObject : NSObject

@property (retain) NSCalendar *calendar;
@property (copy) NSString *dayNumber;
@property (copy) id /* block */ dateNameBlock;
@property long long dateNameFormatType;
@property struct CGSize { double width; double height; } canvasSize;
@property long long format;
@property (readonly, nonatomic) UIFont *dayNumberFont;
@property (readonly, nonatomic) double dayNumberBaselineVerticalInset;
@property (readonly, nonatomic) double dayNumberTrackingValue;
@property (readonly, nonatomic) UIFont *dateNameFont;
@property (readonly, nonatomic) double dateNameBaselineVerticalInset;
@property (readonly, nonatomic) double dateNameHorizontalInset;
@property (readonly, nonatomic) double minFullDateNameFontScale;
@property (readonly, nonatomic) double minDateNameFontScale;
@property (readonly, nonatomic) double minDateNameLetterSpacing;

+ (id)colorForDayOfWeek;
+ (id)countriesRequiringBlackDayOfWeek;
+ (BOOL)isBlackDayOfWeekRequiredForLocale:(id)a0;
+ (id)_dateNamesForDateFormatter:(id)a0 type:(long long)a1;
+ (id)_dateNamesForCalendar:(id)a0 type:(long long)a1;

- (void)_drawDayNumber;
- (void)draw;
- (void).cxx_destruct;
- (void)_drawDateName;
- (void)_drawDayNumberForHomeScreenStyledIcon;
- (void)_drawDayNumberForNotificationIcon;
- (id)dateNameFont:(id)a0;
- (double)resizeAttributedString:(id)a0 withDateName:(id)a1 font:(id)a2 ctx:(id)a3 maxSize:(struct CGSize { double x0; double x1; })a4;
- (id)dateNameFont:(id)a0 size:(double)a1;
- (id)_systemG2FromFont:(id)a0;
- (BOOL)_shouldUseJ207SmallerFont:(id)a0;
- (double)dateNameFontSizeForName:(id)a0;
- (double)_homeScreenDateNameBaselineVerticalInset;
- (id)initWithCalendar:(id)a0 dayNumber:(id)a1 dateNameBlock:(id /* block */)a2 dateNameFormatType:(long long)a3 canvasSize:(struct CGSize { double x0; double x1; })a4 format:(long long)a5;

@end
