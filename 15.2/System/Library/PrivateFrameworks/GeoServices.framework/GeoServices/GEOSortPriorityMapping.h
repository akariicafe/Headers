@class NSArray;

@interface GEOSortPriorityMapping : NSObject

@property (readonly, nonatomic) NSArray *entries;

+ (long long)resultTypeForACResultType:(int)a0;
+ (long long)resultSubtypeForACResultSubtype:(int)a0;
+ (id)sortPriorityMappingFromDefaultsValue:(id)a0;

- (id)initWithEntries:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAutocompleteResultSortPriorityMapping:(id)a0;

@end
