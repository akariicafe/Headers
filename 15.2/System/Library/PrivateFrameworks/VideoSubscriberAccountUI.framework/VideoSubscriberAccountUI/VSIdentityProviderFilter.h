@class NSArray, NSString;

@interface VSIdentityProviderFilter : NSObject

@property (copy, nonatomic) NSArray *allIdentityProviders;
@property (copy, nonatomic) NSArray *supportedAccountProviderIDs;
@property (copy, nonatomic) NSString *searchQuery;
@property (readonly, copy, nonatomic) NSArray *filteredIdentityProviders;

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;

- (void).cxx_destruct;
- (id)init;

@end
