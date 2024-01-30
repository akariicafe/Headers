@interface PassKitUI.AddressSearchingModel : NSObject <PKAddressSearchModelDelegate> {
    void /* unknown type, empty encoding */ _isMatchingContact;
    void /* unknown type, empty encoding */ _mapsOnly;
    void /* unknown type, empty encoding */ searchModel;
    void /* unknown type, empty encoding */ _contactResults;
    void /* unknown type, empty encoding */ _mapsResults;
    void /* unknown type, empty encoding */ contactMatchHandler;
    void /* unknown type, empty encoding */ emptyResultsForEmptySearchTerm;
    void /* unknown type, empty encoding */ ignoreNextSearchedText;
    void /* unknown type, empty encoding */ _searchText;
}

- (void)contactsSearchUpdated:(id)a0;
- (void)mapSearchUpdated:(id)a0;
- (void)selectedAddress:(id)a0 withError:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
