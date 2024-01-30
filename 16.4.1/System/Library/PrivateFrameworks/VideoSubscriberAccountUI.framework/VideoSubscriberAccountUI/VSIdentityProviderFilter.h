@class NSArray, VSTrie, NSString;

@interface VSIdentityProviderFilter : NSObject

@property (copy, nonatomic) NSArray *supportedIdentityProviders;
@property (retain, nonatomic) VSTrie *searchTree;
@property (copy, nonatomic) NSArray *allIdentityProviders;
@property (copy, nonatomic) NSArray *supportedAccountProviderIDs;
@property (copy, nonatomic) NSString *searchQuery;
@property (readonly, copy, nonatomic) NSArray *filteredIdentityProviders;

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;

- (id)init;
- (void).cxx_destruct;
- (id)_camelAndWordBasedPrefixesForProvider:(id)a0;
- (void)_refreshProviderList;

@end
