@class EFPromise, NSString, NSProgress, NSLock, NSArray, NSMutableArray, NSObject;
@protocol OS_os_log, EMTopHitSearchQueryable;

@interface EMSearchableIndexTopHitsQuery : NSObject <EFLoggable, EFCancelable, NSProgressReporting>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) id<EMTopHitSearchQueryable> topHitSearchQuery;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSMutableArray *foundItems;
@property (retain, nonatomic) EFPromise *spotlightTopHitsQueryResultPromise;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSProgress *internalProgress;
@property (retain, nonatomic) NSString *logPrefix;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, copy, nonatomic) NSArray *filterQueries;
@property (readonly, copy, nonatomic) NSString *keyboardLanguage;
@property (readonly, nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (void)_cancel;
- (void)cancel;
- (void)_configureTopHitsSearchQuery:(id)a0;
- (void)_searchFoundItems:(id)a0;
- (void)_searchDidCompleteWithError:(id)a0;
- (id)initWithSearchString:(id)a0 filterQueries:(id)a1 bundleID:(id)a2 keyboardLanguage:(id)a3 limit:(unsigned long long)a4;
- (id)topHitsQueryResult;

@end
