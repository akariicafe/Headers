@class NSString, NSSet, PSSearchResults;
@protocol PSSearchOperationDelegate;

@interface PSSearchOperation : NSOperation

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSSet *rootEntries;
@property (readonly, copy) PSSearchResults *currentResults;
@property (nonatomic, getter=isNewQuery) BOOL newQuery;
@property (weak) id<PSSearchOperationDelegate> delegate;

+ (struct __CFStringTokenizer { } *)_wordBoundaryTokenizer;

- (id)_filterEntriesMatchingQuery:(id)a0 forQuery:(id)a1;
- (BOOL)_searchEntries:(id)a0 forQuery:(id)a1;
- (BOOL)_systemLanguageHasContinuousScript;
- (id)description;
- (void)main;
- (void).cxx_destruct;
- (id)initWithSearchQuery:(id)a0 rootEntries:(id)a1;
- (void)_didCancel;
- (void)dealloc;
- (id)debugDescription;

@end
