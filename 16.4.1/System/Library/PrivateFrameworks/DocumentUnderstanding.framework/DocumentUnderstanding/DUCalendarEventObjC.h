@class _TtC21DocumentUnderstanding15DUCalendarEvent, NSDateComponents, NSTimeZone;

@interface DUCalendarEventObjC : NSObject {
    _TtC21DocumentUnderstanding15DUCalendarEvent *_underlying;
}

@property (nonatomic) BOOL isAllDay;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSTimeZone *startTimezone;
@property (copy, nonatomic) NSDateComponents *endDateComponents;
@property (copy, nonatomic) NSTimeZone *endTimezone;

- (id)init;
- (void).cxx_destruct;

@end
