@class NSURL, NSMutableArray, NSError;
@protocol HDJournalChapterEnumeratorTestsDelegate;

@interface HDJournalChapterEnumerator : NSObject {
    NSURL *_URL;
    long long _currentIndex;
    BOOL _hasLoadedPersistedJournalNames;
    long long _maxAllowedOpenJournalChapterCount;
    long long _totalJournalChapterCount;
    NSError *_cachedError;
}

@property (retain, nonatomic) NSMutableArray *remainingJournalChapters;
@property (retain, nonatomic) NSMutableArray *openJournalChapters;
@property (readonly, nonatomic, getter=_totalOpenJournalChapterCount) unsigned long long totalOpenJournalChapterCount;
@property (nonatomic) long long maxAllowedOpenJournalChapterCount;
@property (weak, nonatomic) id<HDJournalChapterEnumeratorTestsDelegate> unitTestDelegate;
@property (readonly, nonatomic) BOOL hasJournalChapters;
@property (readonly, nonatomic) unsigned long long totalJournalChapterCount;
@property (readonly, nonatomic) unsigned long long currentJournalChapterIndex;
@property (readonly, nonatomic, getter=hasMoreJournalChapters) BOOL moreJournalChapters;

+ (id)journalChaptersForURL:(id)a0 error:(id *)a1;
+ (id)nextJournalChapterNameForURL:(id)a0;
+ (id)_journalChaptersForURL:(id)a0 sorted:(BOOL)a1 error:(id *)a2;
+ (long long)journalChapterCountForURL:(id)a0;
+ (id)_lightweightDirectoryEnumeratorForURL:(id)a0;

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void)closeJournalChapters;
- (BOOL)_updateRollingBufferIfRequiredWithError:(id *)a0;
- (id)nextOpenJournalChapterError:(id *)a0;
- (BOOL)loadSortedJournalChaptersWithError:(id *)a0;
- (id)_openJournalChapters:(id)a0 error:(id *)a1;

@end
