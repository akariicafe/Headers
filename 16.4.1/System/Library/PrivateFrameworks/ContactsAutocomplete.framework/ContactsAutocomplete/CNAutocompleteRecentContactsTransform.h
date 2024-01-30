@class NSString, NSArray, CRRecentContactsLibrary;

@interface CNAutocompleteRecentContactsTransform : NSObject

@property (copy) NSString *priorityDomainForSorting;
@property (copy) NSString *sendingAddress;
@property (copy) NSArray *otherAddressesAlreadyChosen;
@property (copy) NSString *searchString;
@property (retain) CRRecentContactsLibrary *library;

+ (long long)addressTypeForRecentContact:(id)a0;
+ (id)autocompleteResultForRecent:(id)a0 factory:(id)a1 membersFactory:(id)a2 chosenAddressHashes:(id)a3 searchString:(id)a4 library:(id)a5;
+ (id)contactAutocompleteResultForRecent:(id)a0 factory:(id)a1 completesChosenGroup:(BOOL)a2;
+ (id)groupAutocompleteResultForRecent:(id)a0 factory:(id)a1 membersFactory:(id)a2 chosenAddressHashes:(id)a3 searchString:(id)a4;
+ (id /* block */)resultTransformWithFactory:(id)a0 membersFactory:(id)a1 chosenAddressHashes:(id)a2 searchString:(id)a3 library:(id)a4;
+ (id /* block */)transformForRequest:(id)a0 library:(id)a1;

- (void).cxx_destruct;

@end
