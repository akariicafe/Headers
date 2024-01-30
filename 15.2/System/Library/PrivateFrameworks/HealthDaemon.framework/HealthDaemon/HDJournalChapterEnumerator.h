@class NSURL, NSError, NSMutableArray;
@protocol HDJournalChapterEnumeratorTestsDelegate;

@interface HDJournalChapterEnumerator : NSObject {
    NSURL *_URL;
    long long _currentIndex;
    BOOL _hasLoadedPersistedJournalNames;
    long long _maxAllowedOpenJournalChapterCount;
    long long _totalJournalChapterCount;
    NSError *_cachedError;
    NSMutableArray *_remainingJournalChapters;
    NSMutableArray *_openJournalChapters;
}

@property (readonly, nonatomic, getter=_totalOpenJournalChapterCount) unsigned long long totalOpenJournalChapterCount;
@property (nonatomic) long long maxAllowedOpenJournalChapterCount;
@property (weak, nonatomic) id<HDJournalChapterEnumeratorTestsDelegate> unitTestDelegate;
@property (readonly, nonatomic) BOOL hasJournalChapters;
@property (readonly, nonatomic) unsigned long long totalJournalChapterCount;
@property (readonly, nonatomic) unsigned long long currentJournalChapterIndex;
@property (readonly, nonatomic, getter=hasMoreJournalChapters) BOOL moreJournalChapters;

+ (id)journalChaptersForURL:(id)a0 error:(id *)a1;
+ (id)nextJournalChapterNameForURL:(id)a0;
+ (long long)journalChapterCountForURL:(id)a0;

- (id)nextOpenJournalChapterError:(id *)a0;
- (id)initWithPath:(id)a0;
- (id)initWithURL:(id)a0;
- (id)_openJournalChapters:(id)a0 error:(id *)a1;
- (BOOL)loadSortedJournalChaptersWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)closeJournalChapters;

@end
