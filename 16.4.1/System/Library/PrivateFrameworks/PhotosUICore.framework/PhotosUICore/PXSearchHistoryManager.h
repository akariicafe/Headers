@class NSArray;

@interface PXSearchHistoryManager : NSObject

@property (retain, nonatomic) NSArray *recentSearches;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)clearRecentSearches;
- (id)_readRecentSearchesFromURL:(id)a0;
- (id)_recentSearchesFileURL;
- (BOOL)_writeRecentSearches:(id)a0 toURL:(id)a1 error:(out id *)a2;
- (void)saveRecentSearch:(id)a0;

@end
