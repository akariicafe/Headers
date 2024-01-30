@class NSArray, NSString;

@interface CSUserQuery : CSSearchQuery

@property (copy) NSArray *filterQueries;
@property (readonly) NSString *keyboardLanguage;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long foundItemCount;

- (id)filterQueries;
- (void)start;
- (void)setFilterQueries:(id)a0;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2;
- (id)keyboardLanguage;
- (void)cancel;

@end
