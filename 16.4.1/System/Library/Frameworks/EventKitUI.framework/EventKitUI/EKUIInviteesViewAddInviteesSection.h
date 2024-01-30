@class NSMutableSet, NSArray, EKEvent, NSString, NSOperationQueue, NSMutableArray, NSMutableDictionary;

@interface EKUIInviteesViewAddInviteesSection : NSObject <EKUIInviteesViewSection>

@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) NSArray *pendingParticipants;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) BOOL canSeeAttendeeStatuses;
@property (retain, nonatomic) NSString *cachedInviteeCellReuseIdentifier;
@property (retain, nonatomic) NSString *cachedAddInviteeCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (nonatomic) BOOL showPending;
@property (retain, nonatomic) NSOperationQueue *availabilityRequestsQueue;
@property (retain, nonatomic) NSMutableDictionary *participantAddressesToAvailabilityType;
@property (retain, nonatomic) NSMutableDictionary *participantAddressesToParticipantIndex;
@property (retain, nonatomic) NSMutableSet *participantAddressesForInFlightAvailabilityOperations;
@property (copy, nonatomic) id /* block */ tableViewCellHook;
@property (copy, nonatomic) id /* block */ participantTapped;
@property (copy, nonatomic) id /* block */ participantRemoved;
@property (copy, nonatomic) id /* block */ addInviteesTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_participantAddressForParticipant:(id)a0;

- (id)debugTitle;
- (unsigned long long)numberOfRows;
- (id)headerTitle;
- (void)dealloc;
- (void)cancelOutstandingOperations;
- (id)init;
- (void).cxx_destruct;
- (void)_addAddressToSetOfAddressesToInflightOperations:(id)a0;
- (BOOL)_isAddInviteesRow:(long long)a0;
- (BOOL)_isSendInviteRow:(long long)a0;
- (BOOL)_isValidRow:(long long)a0;
- (id)_lookUpAvailabilityTypeForParticipantAddress:(id)a0;
- (id)_lookUpParticipantIndexForParticipantAddress:(id)a0;
- (void)_removeAddressFromDictionaryOfAddressesToAvailabilityType:(id)a0;
- (void)_removeAddressFromDictionaryOfAddressesToParticipantIndex:(id)a0;
- (void)_removeAddressFromSetOfAddressesToInflightOperations:(id)a0;
- (void)_removeParticipantAtIndexPath:(id)a0;
- (void)_setAvailabilityType:(id)a0 forParticipantAddress:(id)a1;
- (BOOL)_setOfAddressesToInflightOperationsContainsAddress:(id)a0;
- (void)_setParticipantIndex:(id)a0 forParticipantAddress:(id)a1;
- (void)_updateCell:(id)a0 forParticipantAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)_updateCellForParticipantWithAddress:(id)a0;
- (id)actionsForRow:(id)a0;
- (BOOL)canEditRow:(id)a0;
- (BOOL)canSelectRow:(id)a0;
- (id)cellForIndexPath:(id)a0 inTableView:(id)a1;
- (void)commitEditingStyle:(long long)a0 forRow:(id)a1;
- (id)contextMenuDataForIndexPath:(id)a0 interaction:(id)a1;
- (long long)editingStyleForRow:(id)a0;
- (double)estimatedHeightForRow:(id)a0;
- (BOOL)hasPendingParticipants;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)a0;
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)a0;
- (BOOL)supportsContextMenuForIndexPath:(id)a0;
- (id)titleForDeleteConfirmationButtonForRow:(id)a0;
- (void)updateWithEvent:(id)a0 showPending:(BOOL)a1;

@end
