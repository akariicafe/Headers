@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNFavoritesLogger : NSObject <CNFavoritesLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSObject<OS_os_log> *summaryLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)a0;
- (void)rematchingFavorites:(id /* block */)a0;
- (void)finishedWritingFavoritesToPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)failedToWriteFavoritesToPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void)failedToReadRemoteFavorites:(id)a0;
- (void)finishedWritingRemoteFavorites;
- (void)writingFavorites:(id /* block */)a0;
- (void)_simulateCrashReportWithMessage:(id)a0;
- (void)failedToConvertFavoritesToPropertyList:(id)a0;
- (void)readingFavorites:(id /* block */)a0;
- (id)init;
- (void)failedToWriteRemoteFavorites:(id)a0;
- (void)finishedReadingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)failedToReadFavoritesFromPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void).cxx_destruct;
- (void)failedToVerifyFavorites:(id)a0 withPropertyListFavorites:(id)a1 error:(id)a2;

@end
