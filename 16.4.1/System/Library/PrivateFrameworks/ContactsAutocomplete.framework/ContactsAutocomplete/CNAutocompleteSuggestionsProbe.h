@class NSString, NSMutableArray;
@protocol CNScheduler, SGSuggestionsServiceContactsProtocol;

@interface CNAutocompleteSuggestionsProbe : NSObject <CNAutocompleteSuggestionsProbe>

@property (readonly, nonatomic) id<SGSuggestionsServiceContactsProtocol> sgService;
@property (readonly, nonatomic) id<CNScheduler> workScheduler;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSMutableArray *pendingBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactIdentifierForAutocompleteResult:(id)a0;
+ (id)suggestionIdentifierForAutocompleteResult:(id)a0;
+ (int)suggestionSourcesForAutocompleteResult:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSuggestionsService:(id)a0 schedulerProvider:(id)a1 bundleIdentifier:(id)a2;
- (void)recordSGServiceMessage:(id /* block */)a0;
- (void)recordUserSawResultsConsideredSuggestion;
- (void)recordUserSelectedAutocompleteResult:(id)a0;
- (void)sendData;

@end
