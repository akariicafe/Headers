@class CalendarModel, NSString, NSMutableDictionary, NSDate, EKCalendar;

@interface EKUIPasteboardManager : NSObject <EKAutocompleteSearchPasteboardItemProvider> {
    NSMutableDictionary *_copiedEvents;
    CalendarModel *_calendarModel;
    EKCalendar *_calendarForPaste;
    unsigned long long _pasteDateMode;
    NSDate *_dateForPaste;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_pasteboardItemForEvent:(id)a0;

- (void)copyEvents:(id)a0 presentingViewController:(id)a1;
- (void)pasteEventsWithDateMode:(unsigned long long)a0 pasteDelegate:(id)a1;
- (BOOL)_calendarIsPasteableTo:(id)a0 allCalendars:(id)a1;
- (id)eventsFromPasteboard;
- (void)_pasteEvents:(id)a0 atDate:(id)a1 dateMode:(unsigned long long)a2 pasteDelegate:(id)a3 duplicate:(BOOL)a4;
- (BOOL)canPerformPaste;
- (void)setCalendarForPaste:(id)a0;
- (void)setDateForPaste:(id)a0;
- (void)_copyEvents:(id)a0 toDict:(id)a1;
- (id)calendarToPasteTo;
- (unsigned long long)numberOfEventsToPaste;
- (id)calendarToPasteToWithEvents:(id)a0;
- (void)cutEvents:(id)a0 cutDelegate:(id)a1;
- (void)duplicateEvents:(id)a0 presentingViewController:(id)a1 withDateMode:(unsigned long long)a2 pasteDelegate:(id)a3;
- (void)_validateAction:(unsigned long long)a0 forEvents:(id)a1 presentingViewController:(id)a2 completion:(id /* block */)a3;
- (id)initWithCalendarModel:(id)a0;
- (id)_eventsFromPasteboard:(id)a0;
- (void)_cutEvents:(id)a0 editor:(id)a1;
- (void)_saveNewEventsOrOpenEditor:(id)a0 pasteDelegate:(id)a1 duplicate:(BOOL)a2;
- (void).cxx_destruct;
- (struct CGColor { } *)colorOfCalendarToPasteTo;

@end
