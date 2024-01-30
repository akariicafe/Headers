@class NSString, CNAutocompleteNameComponents, CNAutocompleteResultFactory, NSMutableArray;

@interface CNADASearchResultConverter : NSObject {
    CNAutocompleteResultFactory *_factory;
    NSMutableArray *_results;
}

@property (copy) NSString *displayName;
@property (copy) CNAutocompleteNameComponents *nameComponents;

+ (id /* block */)resultTransformForRequest:(id)a0 factory:(id)a1;
+ (id)displayNameForElement:(id)a0;
+ (id)nameComponentsForElement:(id)a0;
+ (BOOL)shouldIncludeEmailAddressesForRequest:(id)a0;
+ (BOOL)shouldIncludePhoneNumbersForRequest:(id)a0;
+ (id)autocompleteResultsForDASearchResultElement:(id)a0 request:(id)a1 factory:(id)a2;

- (void)addEmailAddress:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (void)addPhoneNumber:(id)a0;
- (id)initWithFactory:(id)a0;

@end
