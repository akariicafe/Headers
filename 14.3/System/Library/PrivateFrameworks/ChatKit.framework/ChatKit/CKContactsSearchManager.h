@class NSNumber, NSString, CNAutocompleteSearchManager, NSArray, NSMutableArray, NSCharacterSet;
@protocol CKContactsSearchManagerDelegate;

@interface CKContactsSearchManager : NSObject <CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate>

@property (retain, nonatomic) CNAutocompleteSearchManager *searchManager;
@property (retain, nonatomic) NSCharacterSet *emojiCharacterSet;
@property (retain, nonatomic) NSMutableArray *searchResults;
@property (retain, nonatomic) NSNumber *currentSearchTaskID;
@property (retain, nonatomic) NSString *searchText;
@property (weak, nonatomic) id<CKContactsSearchManagerDelegate> delegate;
@property (retain, nonatomic) NSArray *enteredRecipients;
@property (nonatomic) BOOL suppressGroupSuggestions;
@property (nonatomic) BOOL biasForOutgoingInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelSearch;
- (id)init;
- (void)removeRecipient:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_cullOldResults:(id)a0;
- (id)_sortResultsByDate:(id)a0;
- (id)_filterGroupResults:(id)a0;
- (id)matchingConversationWithGuid:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForSearchTerm:(id)a0 inTarget:(id)a1 tokenizedByCharacterSet:(id)a2;
- (BOOL)shouldIncludeGroupInResults:(id)a0;
- (id)nameGroupSearchResults;
- (id)createAutocompelteGroupMembersFromParticipants:(id)a0;
- (void)finishedTaskWithID:(id)a0;
- (id)participantMatchResultsForSearchTerm:(id)a0;
- (void)beganNetworkActivity;
- (id)participantMatchGroupResults;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)endedNetworkActivity;
- (BOOL)getSupplementalGroupsForSearchQuery:(id)a0 completionHandler:(id /* block */)a1;
- (id)_sortSearchResultsWithCoreRecentsResults:(id)a0 displayNameMatches:(id)a1 participantNameMatches:(id)a2;
- (void)searchWithText:(id)a0;
- (void)didSelectRecipient:(id)a0 atIndex:(unsigned long long)a1;

@end
