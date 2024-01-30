@class NSDateComponents, NSCalendar, NSDate;

@interface _CDDateQuantizer : NSObject {
    NSCalendar *_calendar;
    long long _dayStartHour;
    NSDate *_currentDay;
    NSDateComponents *_currentQuantizationOffsetComponents;
}

- (void).cxx_destruct;

@end
