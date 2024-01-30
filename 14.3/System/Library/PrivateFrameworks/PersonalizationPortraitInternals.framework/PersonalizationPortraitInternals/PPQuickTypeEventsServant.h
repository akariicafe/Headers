@class PPLocalEventStore;

@interface PPQuickTypeEventsServant : NSObject <PPQuickTypeServantProtocol> {
    PPLocalEventStore *_localEventStore;
}

- (id)_nextFreeEventsFromEvents:(id)a0 explanationSet:(id)a1;
- (id)_quickTypeItemsForEvents:(id)a0 fields:(unsigned int)a1 limit:(unsigned long long)a2 formatter:(id)a3 explanationSet:(id)a4;
- (id)init;
- (id)_quickTypeItemsForEvent:(id)a0 fields:(unsigned int)a1 formatter:(id)a2;
- (id)_fuzzyNextEvents:(id)a0 minimumCount:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_warmUpFormatters;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (BOOL)_userDidOrganizeEvent:(id)a0;
- (id)_valuesForPrediction:(id)a0 fields:(unsigned int)a1 formatter:(id)a2;
- (id)_filterEvents:(id)a0 time:(unsigned char)a1 people:(id)a2 busy:(BOOL)a3 fields:(unsigned int)a4 explanationSet:(id)a5;
- (id)_freeEventsAndGapsFromEvents:(id)a0 explanationSet:(id)a1;
- (id)_nextBusyEventsFromEvents:(id)a0 people:(id)a1 explanationSet:(id)a2;
- (BOOL)_areAllPeopleOfInterest:(id)a0 inAttendeeList:(id)a1;
- (BOOL)_shouldTreatAsUnscheduledFreeTime:(id)a0;
- (unsigned char)_userStatusForEvent:(id)a0;
- (BOOL)_eventIsHappening:(id)a0;
- (id)_lastFreeEventsFromEvents:(id)a0 explanationSet:(id)a1;
- (id)_lastBusyEventsFromEvents:(id)a0 people:(id)a1 explanationSet:(id)a2;
- (id)_unscheduledFreeTimeEventFrom:(id)a0 to:(id)a1;
- (id)_labelForEvent:(id)a0 value:(id)a1 fields:(unsigned int)a2 formatter:(id)a3;
- (BOOL)_userIsInvitedToEvent:(id)a0;
- (BOOL)_isFreeTime:(id)a0;
- (id)_busyEventsFromEvents:(id)a0 people:(id)a1 explanationSet:(id)a2;

@end
