@class NSArray;

@interface PXSearchHistoryManager : NSObject

@property (retain, nonatomic) NSArray *recentSearches;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)clearRecentSearches;
- (void)saveRecentSearch:(id)a0;
- (id)_recentSearchesFileURL;
- (BOOL)_writeRecentSearches:(id)a0 toURL:(id)a1 error:(out id *)a2;
- (id)_readRecentSearchesFromURL:(id)a0;

@end
