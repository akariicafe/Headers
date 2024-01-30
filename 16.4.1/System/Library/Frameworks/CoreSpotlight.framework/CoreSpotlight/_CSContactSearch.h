@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CNCancelable;

@interface _CSContactSearch : NSObject <CNAutocompleteFetchDelegate> {
    NSMutableArray *_accumulatedContacts;
    unsigned long long _startTime;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) unsigned long long queryID;
@property (readonly, nonatomic) BOOL autocompleteEnabled;
@property (readonly, nonatomic) BOOL includeRecents;
@property (retain, nonatomic) id<CNCancelable> autocompleteRequest;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactStore;
+ (id)autocompleteStore;
+ (BOOL)doesContactMatchTerm:(id)a0 contact:(id)a1;
+ (id)filterContactsBasedOnUserQueryString:(id)a0 contacts:(id)a1;

- (void)cancel;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)startAutocompleteContactsSearch;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (id)contactsMatchingQuery:(id)a0 error:(id *)a1;
- (void)handleCompletionWithContacts:(id)a0 error:(id)a1;
- (id)initWithQuery:(id)a0 queryID:(unsigned long long)a1 autocompleteEnabled:(BOOL)a2;
- (void)startContactsSearch;

@end
