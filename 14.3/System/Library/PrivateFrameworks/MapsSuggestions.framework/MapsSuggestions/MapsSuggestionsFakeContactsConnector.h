@class NSString, MapsSuggestionsContacts, NSArray, NSMutableDictionary, NSError;

@interface MapsSuggestionsFakeContactsConnector : NSObject <MapsSuggestionsContactsConnector> {
    MapsSuggestionsContacts *_delegate;
    NSArray *_configuredPostalAddresses;
    NSMutableDictionary *_singleLineStringsPerPostalAddress;
    NSError *_configuredError;
    BOOL _isListening;
    unsigned long long _calledStartListeningForChanges;
    unsigned long long _calledStopListeningForChanges;
    unsigned long long _calledCrossPlatformUnifiedMeContactWithKeysToFetch;
    unsigned long long _calledSingleLineString;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startListeningForChanges;
- (void).cxx_destruct;
- (void)stopListeningForChanges;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)a0 error:(id *)a1;
- (void)configureMeCardPostalAddresses:(id)a0;
- (void)configureSingleLineString:(id)a0 forPostalAddress:(id)a1;
- (void)fireContactsDidUpdate;
- (unsigned long long)calledCrossPlatformUnifiedMeContactWithKeysToFetch;
- (unsigned long long)calledStartListeningForChanges;
- (unsigned long long)calledStopListeningForChanges;
- (unsigned long long)calledSingleLineString;
- (void)setDelegate:(id)a0;
- (id)singleLineStringFromPostalAddress:(id)a0 addCountryName:(BOOL)a1;
- (void)configureError:(id)a0;

@end
