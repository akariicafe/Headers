@class NSDateComponents, NSCalendar, NSDate;
@protocol HUActsAsLabel;

@interface HUCameraDateDisplayController : NSObject

@property (weak, nonatomic) id<HUActsAsLabel> dayLabel;
@property (weak, nonatomic) id<HUActsAsLabel> timeLabel;
@property (nonatomic) unsigned long long dateDisplayType;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSCalendar *calendar;
@property (nonatomic) BOOL dayHasChanged;
@property (retain, nonatomic) NSDateComponents *currentDateComponents;
@property (nonatomic) unsigned int secondUnitFlags;
@property (nonatomic) unsigned int minuteUnitFlags;

- (void).cxx_destruct;
- (void)_updateTimeLabel;
- (void)_updateDayLabel;
- (BOOL)_isSameMinuteAsDate:(id)a0;
- (BOOL)_isSameSecondAsDate:(id)a0;
- (void)_resetLabels;
- (BOOL)_shouldUpdateDisplayWithDate:(id)a0;
- (id)initWithDayOfWeekLabel:(id)a0 timeLabel:(id)a1;
- (void)updateDisplayDateWithDate:(id)a0 forType:(unsigned long long)a1;

@end
