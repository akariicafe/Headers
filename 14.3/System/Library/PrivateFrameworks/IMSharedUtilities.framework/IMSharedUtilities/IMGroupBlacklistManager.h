@class NSDate;

@interface IMGroupBlacklistManager : NSObject

@property (retain) NSDate *lastModifiedDate;

+ (id)sharedInstance;
+ (id)groupsBlacklistFilename;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasFileChanged;
- (id)initFromFile:(id)a0;
- (BOOL)isFeatureDisabled;
- (void)_updateLastModifiedDate:(id)a0;
- (void)blacklistGroupId:(id)a0;
- (BOOL)isGroupInBlacklist:(id)a0;
- (void)save;
- (void)reloadIfNeeded;
- (void)loadData;
- (void)loadFromFile:(id)a0;

@end
