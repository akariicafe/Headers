@class NSString, NSMutableDictionary;

@interface ADAdServerManifestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *recordsByServerName;
@property (copy, nonatomic) NSString *deviceDescription;
@property (readonly, nonatomic) BOOL updateInProgress;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id)serverRecords;
- (void)setURL:(id)a0 forTemporaryServerWithName:(id)a1;
- (void)_setURL:(id)a0 forServerWithName:(id)a1 temporary:(BOOL)a2;
- (void)_considerRefreshingServerRecord:(id)a0;
- (void)_persistRecords;
- (id)_persistedManifestsURL;
- (void)_storeLoadedRecords:(id)a0 completionHandler:(id /* block */)a1;
- (id)URLForServerWithName:(id)a0;
- (void)setManifest:(id)a0 forRecord:(id)a1 URL:(id)a2;
- (void)refreshAllRecords;
- (void)refreshRecord:(id)a0;
- (void)_loadRecords:(id /* block */)a0;

@end
