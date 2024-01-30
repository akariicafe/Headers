@class CNContactStore, _CDInteractionStore, NSXPCConnection, _PSContactResolver;

@interface _PSContactSuggester : NSObject {
    _PSContactResolver *contactResolver;
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) CNContactStore *contactStore;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsByIdentifiers:(id)a1 lookBackDays:(long long)a2 interactions:(id)a3 modeAvocado:(BOOL)a4;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 contactKeysTofetch:(id)a1 interactionDomains:(id)a2 referenceDate:(id)a3 appleUsersOnly:(BOOL)a4;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsWithIdentifiers:(id)a1;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsByIdentifiers:(id)a1;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 contactKeysTofetch:(id)a1 interactionDomains:(id)a2 appleUsersOnly:(BOOL)a3;
- (id)contactKeysToFetch;

@end
