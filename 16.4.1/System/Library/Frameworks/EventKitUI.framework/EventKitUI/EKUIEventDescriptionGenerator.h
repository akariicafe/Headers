@class NSNumberFormatter;

@interface EKUIEventDescriptionGenerator : NSObject {
    struct __CFDateFormatter { } *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
}

+ (id)eventDescriptionForDrag:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_adjustedMinutesTillEventStarts:(id)a0;
- (id)_attendeesForEvent:(id)a0 sorted:(BOOL)a1 limitedTo:(long long)a2;
- (struct __CFDateFormatter { } *)_sharedDateFormatter;
- (id)_sharedNumberFormatter;
- (BOOL)_startTimeRequiresSingularForEvent:(id)a0 withTimeString:(id)a1;
- (id)naturalLanguageDescriptionForAttendees:(id)a0;
- (id)timeStringForEvent:(id)a0 forBeginningOfSentence:(BOOL)a1 useExplicitTimes:(BOOL)a2 followingComma:(BOOL)a3;

@end
