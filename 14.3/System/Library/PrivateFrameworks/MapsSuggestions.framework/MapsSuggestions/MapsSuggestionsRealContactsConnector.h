@class NSString, MapsSuggestionsContacts;

@interface MapsSuggestionsRealContactsConnector : NSObject <MapsSuggestionsContactsConnector> {
    MapsSuggestionsContacts *_delegate;
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
- (void)setDelegate:(id)a0;
- (id)singleLineStringFromPostalAddress:(id)a0 addCountryName:(BOOL)a1;
- (void)receivedNotification:(id)a0;

@end
