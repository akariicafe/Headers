@interface CUIKAvailabilityDescriptionGenerator : NSObject

+ (id)showMoreString;
+ (id)attendeeProposedANewTime:(id)a0 attendeeName:(id)a1;
+ (id)waitingForAvailabilityQueryString;
+ (id)failedString;
+ (id)allInviteesCanAttendString;
+ (id)someInviteesCanAttendString;
+ (id)youProposedString;
+ (id)proposeANewTimePlaceholderString;
+ (id)weekdayMonthDayString:(id)a0;
+ (id)timeRangeStringWithStartDate:(id)a0 withEndDate:(id)a1;

@end
