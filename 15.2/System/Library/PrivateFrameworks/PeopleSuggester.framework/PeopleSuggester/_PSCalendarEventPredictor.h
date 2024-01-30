@class CNContactStore, EKEventStore;

@interface _PSCalendarEventPredictor : NSObject {
    EKEventStore *_eventStore;
    CNContactStore *_contactStore;
}

+ (BOOL)isCorecipientParticipant:(id)a0 seedRecipients:(id)a1 contactsMap:(id)a2;
+ (BOOL)hasFaceTimeSignalInEvent:(id)a0;
+ (unsigned long long)_numOfOtherParticipantsInEvent:(id)a0;
+ (BOOL)currentUserIsEligibleForEvent:(id)a0;
+ (BOOL)isEligibleParticipant:(id)a0 context:(id)a1 contactsMap:(id)a2;
+ (id /* block */)participantComparatorWithContactsMap:(id)a0;
+ (id)_handleFromParticipant:(id)a0;
+ (BOOL)isMaybeFaceTimeEvent:(id)a0 earliestStartDate:(id)a1 latestStartDate:(id)a2 maxParticipants:(unsigned long long)a3;
+ (id /* block */)eventComparatorWithPredictionContext:(id)a0 contactsMap:(id)a1;
+ (id)getZKWSuggestionForCalendarEvent:(id)a0 context:(id)a1 contactsMap:(id)a2;
+ (id)createFinalSuggestions:(id)a0 context:(id)a1;

- (id)initWithEventStore:(id)a0 contactStore:(id)a1;
- (id)getParticipantContactsMapFromEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)contactKeysToFetch;
- (id)zkwSuggestionsFromCalendarWithPredictionContext:(id)a0 startDate:(id)a1 endDate:(id)a2 maxParticipants:(unsigned long long)a3;

@end
