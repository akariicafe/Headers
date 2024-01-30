@interface CUIKAvailabilityDescriptionGenerator : NSObject

+ (id)attendeeProposedANewTime:(id)a0 attendeeName:(id)a1;
+ (id)waitingForAvailabilityQueryString;
+ (id)allInviteesCanAttendString;
+ (id)someInviteesCanAttendString;
+ (id)youProposedString;
+ (id)showMoreString;
+ (id)proposeANewTimePlaceholderString;
+ (id)weekdayMonthDayString:(id)a0;
+ (id)timeRangeStringWithStartDate:(id)a0 withEndDate:(id)a1;

@end
