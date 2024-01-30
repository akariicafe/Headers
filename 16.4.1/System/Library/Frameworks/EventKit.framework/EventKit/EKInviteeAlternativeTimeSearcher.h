@class NSDate, NSString, NSArray, NSMutableDictionary, NSOperationQueue, NSMutableArray, NSObject, EKSource;
@protocol OS_dispatch_queue;

@interface EKInviteeAlternativeTimeSearcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSDate *internalOriginalStartDate;
@property (retain, nonatomic) NSDate *internalOriginalEndDate;
@property (retain, nonatomic) NSDate *originalRangeStartDate;
@property (retain, nonatomic) NSMutableArray *internalProposedStarts;
@property (retain, nonatomic) EKSource *source;
@property (retain, nonatomic) NSString *ignoredEventID;
@property (retain, nonatomic) NSOperationQueue *availabilityRequestsQueue;
@property (retain, nonatomic) NSMutableDictionary *participantAddressesToParticipants;
@property (retain, nonatomic) NSString *organizerAddress;
@property (nonatomic) BOOL availabilityRequestInProgress;
@property (retain, nonatomic) NSDate *nextAvailabilityRangeStartDate;
@property (nonatomic) double availabilitySearchDurationMultiplier;
@property (nonatomic) unsigned long long remainingSearchAttempts;
@property (retain, nonatomic) NSMutableArray *leftoverSpans;
@property (retain, nonatomic) NSMutableArray *internalTimesWhenAllAttendeesCanAttend;
@property (retain, nonatomic) NSMutableArray *internalTimesWhenSomeAttendeesCanAttend;
@property (retain, nonatomic) NSMutableArray *internalProposedTimes;
@property (retain, nonatomic) NSMutableArray *internalOriginalConflictedParticipants;
@property (nonatomic) BOOL internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
@property (nonatomic) BOOL internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
@property (copy, nonatomic) id /* block */ stateChanged;
@property (readonly, nonatomic) NSDate *originalStartDate;
@property (readonly, nonatomic) NSDate *originalEndDate;
@property (readonly, nonatomic) NSArray *originalConflictedParticipants;
@property (readonly, nonatomic) NSArray *timesWhenAllAttendeesCanAttend;
@property (readonly, nonatomic) NSArray *timesWhenSomeAttendeesCanAttend;
@property (readonly, nonatomic) NSArray *proposedTimes;
@property (readonly, nonatomic) BOOL searchingForMoreTimesWhenAllAttendeesCanAttend;
@property (readonly, nonatomic) BOOL searchingForMoreTimesWhenSomeAttendeesCanAttend;
@property (nonatomic) BOOL noConflictRequired;

+ (id)stateAsString:(long long)a0;
+ (void)_validateSpans:(id)a0;
+ (id)_addressesForParticipants:(id)a0;
+ (id)_allButFirstItemInArray:(id)a0;
+ (id)_allButLastItemInArray:(id)a0;
+ (long long)_binarySearchForIndexOfTimeSpanInArray:(id)a0 containingDate:(id)a1;
+ (id)_findHighestRankedNonOptimalTimeSpans:(id)a0;
+ (id)_findLeftoverSpans:(id)a0 usingFreeTimes:(id)a1 andNonOptimalTimes:(id)a2;
+ (void)_insertUniqueParticipants:(id)a0 intoExistingParticipantsArray:(id)a1;
+ (long long)_invalidBinarySearchIndex;
+ (id)_rankNonOptimalTimeSpans:(id)a0;
+ (id)_selfOrganizerForNewlyScheduledEventWithAddress:(id)a0;
+ (BOOL)_span:(id)a0 hasSameConflictedParticipantsAsSpan:(id)a1;

- (id)initWithStateChangedCallback:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_attemptSearch;
- (id)_filterOutUnreasonableTimeSlots:(id)a0;
- (id)_generateNonOptimalTimesFromTimeSpans:(id)a0;
- (id)_generateOpenFreeTimesFromTimeSpans:(id)a0;
- (id)_generateTimeSpansForResults:(id)a0 betweenStartDate:(id)a1 endDate:(id)a2;
- (void)_haltSearchWithError:(BOOL)a0;
- (id)_mergeAdjacentSpansWithSameConflictedParticipants:(id)a0;
- (id)_participantforParticipantAddress:(id)a0;
- (void)_processResults:(id)a0 betweenStartDate:(id)a1 endDate:(id)a2;
- (void)_resetSearchFallbackNumbers;
- (void)_sendStateChange:(long long)a0;
- (id)_spliceLeftTimeSpans:(id)a0 andNewTimeSpans:(id)a1;
- (void)_transitionToConflictFoundStateAndSearch;
- (void)resetWithEvent:(id)a0 organizerAddressForNewlyScheduledEvent:(id)a1;
- (void)searchForMoreTimesWhenAllAttendeesCanAttend;
- (void)searchForMoreTimesWhenSomeAttendeesCanAttend;

@end
