@class TCSSuggestions, NSArray, NSString;
@protocol TCSSuggestionsDataSourceDelegate;

@interface TCSSuggestionsDataSource : NSObject <TCSSuggestionsObserver>

@property (retain, nonatomic) TCSSuggestions *suggestions;
@property (retain, nonatomic) NSArray *suggestedContacts;
@property (weak, nonatomic) id<TCSSuggestionsDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL hasSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidate;
- (void)suggestionsDidChange:(id)a0;
- (id)initWithSuggestions:(id)a0;
- (void)_handleDeviceFirstUnlock;
- (void)_handlePersonNamePreferencesChangeNotification;
- (void)_handleContactStoreDidChange:(id)a0;
- (id)_sortedContactsArrayFromArray:(id)a0;
- (void)_notifyDelegateSuggestionsChanged;

@end
