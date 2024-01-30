@class NSMutableDictionary, FCKeyValueStore;
@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject

@property (retain, nonatomic) NSMutableDictionary *tagSettingsEntriesByTagID;
@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (weak, nonatomic) id<FCTagSettingsDelegate> delegate;

+ (id)commandsToMergeLocalDataToCloud:(id)a0;

- (id)webAccessOptedInTagIDs;
- (void).cxx_destruct;
- (void)setFontSizeForTagID:(id)a0 fontSize:(id)a1;
- (void)syncForTagID:(id)a0;
- (id)authenticatedAccessTokensByTagID;
- (void)setAccessTokenForTagID:(id)a0 accessToken:(id)a1 userInitiated:(BOOL)a2;
- (void)setWebAccessOptInForTagID:(id)a0 webAccessOptIn:(BOOL)a1;
- (id)accessTokenForTagID:(id)a0;
- (id)fontSizeForTagID:(id)a0;
- (id)allTagSettingsRecords;
- (id)initWithStore:(id)a0 tagSettingsDelegate:(id)a1;
- (void)handleSyncWithTagSettingsRecord:(id)a0;
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)allTagSettingsRecordNames;
- (void)setContentScaleForTagID:(id)a0 contentScale:(id)a1;
- (id)contentScaleForTagID:(id)a0;

@end
