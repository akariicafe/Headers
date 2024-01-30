@class NSString, NSCalendar;

@interface CUIKIconDrawObject : NSObject

@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSString *dayNumber;
@property (readonly, copy, nonatomic) NSString *dateName;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (readonly, nonatomic) double canvasScale;

+ (id)countriesRequiringBlackDayOfWeek;
+ (BOOL)isBlackDayOfWeekRequiredForLocale:(id)a0;

- (void)_drawDayNumber;
- (void)draw;
- (id)_dateNameFontOfSize:(double)a0;
- (id)_iconRedColor;
- (void).cxx_destruct;
- (id)_iconBlackColor;
- (void)_drawDateName;
- (id)colorForDayOfWeek;
- (id)initWithCalendar:(id)a0 dayNumber:(id)a1 dateName:(id)a2 canvasSize:(struct CGSize { double x0; double x1; })a3 canvasScale:(double)a4;
- (id)_dayNumberFont;
- (double)_roundSpecToActual:(double)a0;
- (id)_dateNameFont;

@end
