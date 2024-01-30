@class WRReplyStoreInfo, NSString, NSArray, NPSDomainAccessor, NPSManager, NSObject;
@protocol OS_os_log;

@interface WRCannedRepliesStore : NSObject {
    unsigned long long _category;
    WRReplyStoreInfo *_info;
    NSString *_cachedLanguage;
    NSArray *_cachedLocalizedReplies;
    NSArray *_cannedReplies;
    BOOL _didLocalizeDefaultReplies;
    BOOL _didMigrationCheck;
    NPSDomainAccessor *_domainAccessor;
    NSObject<OS_os_log> *_log;
    NPSManager *_npsManager;
}

+ (id)supportedLanguages;
+ (BOOL)isTinker;
+ (BOOL)supportsEnhancedEditing;

- (id)domainAccessor;
- (id)initWithCategory:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)repliesForLanguage:(id)a0;
- (void)dealloc;
- (id)npsManager;
- (id)cannedReplies;
- (BOOL)includeSmartReplies;
- (void)setIncludeSmartReplies:(BOOL)a0;
- (void)setCannedReplies:(id)a0;
- (void)invalidateCachesIfNeededForLanguage:(id)a0;
- (void)loadCannedRepliesIfNeeded;
- (BOOL)usesFormalReplies;
- (id)localizedDefaultReply:(id)a0;
- (id)localizedFormalDefaultReply:(id)a0;
- (void)localizeDefaultRepliesIfNeeded;
- (void)saveReplies:(id)a0;
- (BOOL)supportsSmartReplies;
- (id)migrateRepliesIfNeeded:(id)a0;
- (void)handleStoreChange;

@end
