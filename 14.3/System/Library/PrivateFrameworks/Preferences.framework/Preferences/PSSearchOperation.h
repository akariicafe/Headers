@class NSString, NSSet, PSSearchResults;
@protocol PSSearchOperationDelegate;

@interface PSSearchOperation : NSOperation

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSSet *rootEntries;
@property (readonly, copy) PSSearchResults *currentResults;
@property (nonatomic, getter=isNewQuery) BOOL newQuery;
@property (weak) id<PSSearchOperationDelegate> delegate;

+ (struct __CFStringTokenizer { } *)_wordBoundaryTokenizer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_filterEntriesMatchingQuery:(id)a0 forQuery:(id)a1;
- (BOOL)_searchEntries:(id)a0 forQuery:(id)a1;
- (BOOL)_systemLanguageHasContinuousScript;
- (void)main;
- (id)description;
- (id)initWithSearchQuery:(id)a0 rootEntries:(id)a1;
- (id)debugDescription;
- (void)_didCancel;

@end
