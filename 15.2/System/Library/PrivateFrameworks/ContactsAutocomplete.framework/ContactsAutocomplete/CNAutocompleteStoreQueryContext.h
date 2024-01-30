@class CNCache;

@interface CNAutocompleteStoreQueryContext : NSObject

@property (readonly) CNCache *directoryServerReuseCache;
@property (readonly) CNCache *calendarServerReuseCache;

+ (id)cacheBoundaryStrategies;

- (void).cxx_destruct;
- (id)init;

@end
