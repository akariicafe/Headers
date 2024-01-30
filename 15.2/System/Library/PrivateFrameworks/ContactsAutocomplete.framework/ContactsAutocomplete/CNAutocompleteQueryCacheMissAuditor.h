@class NSArray, CNAutocompleteQueryCacheMissLogger;

@interface CNAutocompleteQueryCacheMissAuditor : NSObject

@property (retain) CNAutocompleteQueryCacheMissLogger *logger;
@property (copy) NSArray *cachedResults;

- (id)initWithLogger:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)didReturnCachedResults:(id)a0;
- (void)didReturnLiveResults:(id)a0;

@end
