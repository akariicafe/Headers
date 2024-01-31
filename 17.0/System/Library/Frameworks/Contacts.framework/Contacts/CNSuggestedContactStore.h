@protocol CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol;

@interface CNSuggestedContactStore : CNContactStore

@property (retain, nonatomic) id<SGSuggestionsServiceContactsProtocol> suggestionService;
@property (retain, nonatomic) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;

+ (id)storeIdentifier;
+ (BOOL)isSuggestionsSupported;
+ (id)os_log;
+ (id)storeInfoClasses;

- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (BOOL)shouldLogContactsAccess;
- (id)init;
- (id)requestAccessForEntityType:(long long)a0;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)initWithSuggestionsService:(id)a0 siriIntelligenceSettings:(id)a1;
- (BOOL)_processSuggestions:(id)a0 error:(id *)a1 withBlock:(id /* block */)a2;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)originForSuggestion:(id)a0 error:(id *)a1;

@end
