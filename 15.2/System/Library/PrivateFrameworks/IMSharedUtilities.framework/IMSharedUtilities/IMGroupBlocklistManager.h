@class NSDate;

@interface IMGroupBlocklistManager : NSObject

@property (retain) NSDate *lastModifiedDate;

+ (id)sharedInstance;
+ (id)groupsBlocklistFilename;

- (void)save;
- (void)loadData;
- (id)initFromFile:(id)a0;
- (void)loadFromFile:(id)a0;
- (BOOL)isFeatureDisabled;
- (void)_updateLastModifiedDate:(id)a0;
- (BOOL)hasFileChanged;
- (void)blocklistGroupId:(id)a0;
- (BOOL)isGroupInBlocklist:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reloadIfNeeded;

@end
