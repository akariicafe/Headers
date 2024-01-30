@interface FitnessCoachingServices.WalkSuggestionProvider : NSObject <FITypicalDayActivityModelDelegate> {
    void /* unknown type, empty encoding */ dateProvider;
    void /* unknown type, empty encoding */ healthStore;
}

- (id)firstOnWristDateToday;
- (id)currentDate;
- (BOOL)enumerateActivitySummariesFromDateComponents:(id)a0 toDateComponents:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)currentCalendar;
- (id)init;
- (void).cxx_destruct;

@end
