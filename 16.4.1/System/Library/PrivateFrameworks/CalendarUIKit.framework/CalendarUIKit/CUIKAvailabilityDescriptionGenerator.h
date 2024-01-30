@interface CUIKAvailabilityDescriptionGenerator : NSObject

+ (id)showMoreString;
+ (id)allInviteesCanAttendString;
+ (id)attendeeProposedANewTime:(id)a0 attendeeName:(id)a1;
+ (id)failedString;
+ (id)proposeANewTimePlaceholderString;
+ (id)someInviteesCanAttendString;
+ (id)timeRangeStringWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)waitingForAvailabilityQueryString;
+ (id)weekdayMonthDayString:(id)a0;
+ (id)youProposedString;

@end
