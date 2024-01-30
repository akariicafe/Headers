@interface AVTAvatarRecordRendering : NSObject

+ (id)avatarForRecord:(id)a0;
+ (id)memojiForRecord:(id)a0 usageIntent:(unsigned long long)a1;
+ (void)preloadAllAvatarsWithStore:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_castRecord:(id)a0 andDoRecordHandlingBlock:(id /* block */)a1 puppetHandlingBlock:(id /* block */)a2;
+ (id)avatarForRecord:(id)a0 usageIntent:(unsigned long long)a1;
+ (id)memojiForRecord:(id)a0;
+ (void)preloadAllAvatarsWithStore:(id)a0 environment:(id)a1 completionHandler:(id /* block */)a2;
+ (void)preloadAvatarsWithFetchRequests:(id)a0 store:(id)a1 environment:(id)a2 completionHandler:(id /* block */)a3;
+ (void)preloadAvatarsWithIdentifiers:(id)a0 store:(id)a1 completionHandler:(id /* block */)a2;
+ (void)preloadAvatarsWithIdentifiers:(id)a0 store:(id)a1 environment:(id)a2 completionHandler:(id /* block */)a3;

@end
