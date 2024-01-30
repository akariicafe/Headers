@interface VSCacheDeleteService : NSObject

+ (id)sharedService;

- (id)purgeable:(id)a0 urgency:(int)a1;
- (long long)totalSizeOfAssets:(id)a0;
- (BOOL)registerCacheDelete;
- (id)purgeImpl:(id)a0 urgency:(int)a1;
- (id)periodic:(id)a0 urgency:(int)a1;
- (id)purgeableVoiceAssetsWithInfo:(id)a0 urgency:(int)a1;
- (id)purge:(id)a0 urgency:(int)a1;

@end
