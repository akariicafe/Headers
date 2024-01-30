@interface CUIKPasteboardUtilities : NSObject

+ (void)adjustTimesForEventsToPaste:(id)a0 pasteDate:(id)a1 dateMode:(unsigned long long)a2 calendar:(id)a3;
+ (BOOL)allEventsValidForAction:(unsigned long long)a0 fromEvents:(id)a1;
+ (BOOL)declinesToPerformCutCopyPasteAction:(SEL)a0 withSender:(id)a1;
+ (id)duplicateEventsByStrippingUnsupportedFields:(id)a0 toNewCalendar:(id)a1;
+ (id)roundedDateForDate:(id)a0 dateMode:(unsigned long long)a1 calendar:(id)a2;

@end
