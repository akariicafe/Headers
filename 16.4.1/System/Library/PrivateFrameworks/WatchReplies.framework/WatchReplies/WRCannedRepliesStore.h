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
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)cannedReplies;
- (id)npsManager;
- (id)repliesForLanguage:(id)a0;
- (void)handleStoreChange;
- (BOOL)includeSmartReplies;
- (void)invalidateCachesIfNeededForLanguage:(id)a0;
- (id)keyForDefaultReply:(id)a0;
- (void)loadCannedRepliesIfNeeded;
- (void)localizeDefaultRepliesIfNeeded;
- (id)localizedDefaultReply:(id)a0;
- (id)localizedFormalDefaultReply:(id)a0;
- (id)migrateRepliesIfNeeded:(id)a0;
- (void)saveReplies:(id)a0;
- (void)setCannedReplies:(id)a0;
- (void)setIncludeSmartReplies:(BOOL)a0;
- (BOOL)supportsSmartReplies;
- (BOOL)usesFormalReplies;

@end
