@class NSString, CNAutocompleteSearchManager, NSNumber, NSMutableArray;
@protocol MFMailComposeContactsSearchControllerDelegate;

@interface MFMailComposeContactsSearchController : NSObject <CNAutocompleteSearchConsumer> {
    CNAutocompleteSearchManager *_manager;
    NSMutableArray *_autocompleteSearchResults;
    NSMutableArray *_corecipientSearchResults;
    NSNumber *_corecipientSearchTaskID;
    BOOL _foundAnySearchResults;
    unsigned long long _waitingOnSearchResultsCount;
}

@property (retain, nonatomic) NSNumber *taskID;
@property (weak, nonatomic) id<MFMailComposeContactsSearchControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)cancelSearch;
- (id)init;
- (void)removeRecipient:(id)a0;
- (void).cxx_destruct;
- (void)finishedTaskWithID:(id)a0;
- (void)beganNetworkActivity;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeCorecipientSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForCorecipients;
- (void)endedNetworkActivity;
- (void)searchWithString:(id)a0 enteredRecipients:(id)a1 title:(id)a2;
- (void)_cancelSearchAndNotify:(BOOL)a0;
- (void)_finishSearch;
- (void)findCorecipientsWithRecipients:(id)a0;
- (void)didSelectRecipient:(id)a0 atIndex:(unsigned long long)a1;
- (void)searchWithString:(id)a0;

@end
