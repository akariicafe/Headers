@class NSLock, NSString, CSTopHitSearchQuery, NSArray, NSMutableArray, EFPromise, NSProgress, NSObject;
@protocol OS_os_log;

@interface EMSearchableIndexTopHitsQuery : NSObject <EFLoggable, EFCancelable, NSProgressReporting>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) CSTopHitSearchQuery *topHitSearchQuery;
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

- (void)cancel;
- (void).cxx_destruct;
- (void)_configureTopHitsSearchQuery:(id)a0;
- (void)_searchFoundItems:(id)a0;
- (void)_searchDidCompleteWithError:(id)a0;
- (id)initWithSearchString:(id)a0 filterQueries:(id)a1 keyboardLanguage:(id)a2 limit:(unsigned long long)a3;
- (id)topHitsQueryResult;
- (void)start;
- (void)_cancel;

@end
