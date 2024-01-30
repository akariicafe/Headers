@class NSString;

@interface CNMockFavoritesLogger : NSObject <CNFavoritesLogger>

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
- (void)failedToConvertFavoritesToPropertyList:(id)a0;
- (void)readingFavorites:(id /* block */)a0;
- (void)failedToWriteRemoteFavorites:(id)a0;
- (void)finishedReadingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)failedToReadFavoritesFromPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void)failedToVerifyFavorites:(id)a0 withPropertyListFavorites:(id)a1 error:(id)a2;

@end
