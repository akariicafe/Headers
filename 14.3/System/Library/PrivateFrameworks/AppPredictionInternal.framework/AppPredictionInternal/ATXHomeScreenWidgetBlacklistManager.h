@class NSString, _PASLock;

@interface ATXHomeScreenWidgetBlacklistManager : NSObject {
    NSString *_path;
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_fetchBlacklistItemsWithError:(id *)a0;
- (BOOL)_writeItemsToBlacklist:(id)a0;
- (BOOL)blacklistContainsWidgetPersonality:(id)a0;
- (BOOL)addWidgetPersonalitiesToBlacklist:(id)a0;
- (id)fetchBlacklistedWidgetPersonalitiesWithError:(id *)a0;
- (BOOL)_addItemsToBlacklist:(id)a0;
- (BOOL)filterOutExpiredItemsFromBlacklist;

@end
