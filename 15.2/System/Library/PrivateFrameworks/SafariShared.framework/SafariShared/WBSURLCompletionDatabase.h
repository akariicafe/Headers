@class m_capacity, NSString;
@protocol WBSURLCompletionDataSource;

@interface WBSURLCompletionDatabase : NSObject {
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { m_capacity **m_buffer; unsigned int x0; unsigned int m_size; } _fullTextBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { m_capacity **m_buffer; unsigned int x0; unsigned int m_size; } _fullTextHistoryMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { m_capacity **m_buffer; unsigned int x0; unsigned int m_size; } _prefixBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { m_capacity **m_buffer; unsigned int x0; unsigned int m_size; } _prefixHistoryMatchesCache;
    NSString *_fullTextBookmarkMatchesCacheString;
    NSString *_fullTextHistoryMatchesCacheString;
    NSString *_prefixBookmarkMatchesCacheString;
    NSString *_prefixHistoryMatchesCacheString;
}

@property (weak, nonatomic) id<WBSURLCompletionDataSource> dataSource;

+ (void)initializeURLCompletionOnMainThread;
+ (BOOL)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:(const void *)a0;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)getBestMatchesForTypedString:(id)a0 topHits:(id *)a1 matches:(id *)a2 limit:(unsigned long long)a3 forQueryID:(long long)a4 withSearchParameters:(id)a5;
- (void)_getSortedPrefixMatchesForTypedString:(id)a0 topHits:(void *)a1 historyMatches:(void *)a2 historyLimit:(unsigned long long)a3 bookmarkMatches:(void *)a4 bookmarkLimit:(unsigned long long)a5 searchParameters:(id)a6;
- (void)_getSortedFullTextMatchesForTypedString:(id)a0 topHits:(void *)a1 historyMatches:(void *)a2 historyLimit:(unsigned long long)a3 bookmarkMatches:(void *)a4 bookmarkLimit:(unsigned long long)a5 searchParameters:(id)a6;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:(BOOL)a0;
- (void)clearBookmarkMatchesCaches;
- (void)clearHistoryMatchesCache;
- (void)_getSortedMatchesForTypedString:(id)a0 topHits:(void *)a1 historyMatches:(void *)a2 historyLimit:(unsigned long long)a3 bookmarkMatches:(void *)a4 bookmarkLimit:(unsigned long long)a5 searchParameters:(id)a6 prefixMatchesOnly:(BOOL)a7;
- (void)_getUnsortedPrefixMatchesForTypedString:(id)a0 historyMatches:(void *)a1 bookmarkMatches:(void *)a2;
- (void)_getUnsortedFullTextMatchesForTypedString:(id)a0 historyMatches:(void *)a1 bookmarkMatches:(void *)a2 dataTypes:(unsigned int)a3;
- (void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:(void *)a0;
- (void)clearMatchesCaches;

@end
