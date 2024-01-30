@interface CalendarEventAlarmTable : NSObject

@property (nonatomic) BOOL useAllDayAlarms;

- (unsigned long long)countOfPresets;
- (int)intervalForPresetIdentifier:(long long)a0;

@end
