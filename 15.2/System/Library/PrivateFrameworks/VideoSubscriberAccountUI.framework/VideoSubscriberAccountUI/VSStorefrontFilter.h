@class NSArray, NSString;

@interface VSStorefrontFilter : NSObject

@property (copy, nonatomic) NSArray *storefronts;
@property (copy, nonatomic) NSString *searchQuery;
@property (readonly, copy, nonatomic) NSArray *filteredStorefronts;

+ (id)keyPathsForValuesAffectingFilteredStorefronts;

- (void).cxx_destruct;
- (id)init;

@end
