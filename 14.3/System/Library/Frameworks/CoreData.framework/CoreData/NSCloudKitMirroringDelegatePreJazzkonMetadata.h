@class NSString, NSPersistentStore, NSPersistentHistoryToken, NSDictionary;

@interface NSCloudKitMirroringDelegatePreJazzkonMetadata : NSObject {
    NSPersistentStore *_store;
    BOOL _hasInitializedZone;
    BOOL _hasInitializedZoneSubscription;
    BOOL _hasInitializedDatabaseSubscription;
    NSString *_ckIdentityRecordName;
    BOOL _hasCheckedCKIdentity;
    NSDictionary *_keyToPreviousServerChangeToken;
    NSPersistentHistoryToken *_lastHistoryToken;
}

@property (readonly, nonatomic) BOOL loaded;
@property (readonly, nonatomic) BOOL hasChanges;
@property (nonatomic) BOOL hasInitializedZone;
@property (nonatomic) BOOL hasInitializedZoneSubscription;
@property (nonatomic) BOOL hasInitializedDatabaseSubscription;
@property (retain, nonatomic, setter=setCKIdentityRecordName:) NSString *ckIdentityRecordName;
@property (nonatomic) BOOL hasCheckedCKIdentity;
@property (retain, nonatomic) NSPersistentHistoryToken *lastHistoryToken;

+ (id)allDefaultsKeys;

- (id)initWithStore:(id)a0;
- (BOOL)save:(id *)a0;
- (BOOL)load:(id *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)changeTokenForDatabaseScope:(long long)a0;
- (id)changeTokenForZoneWithID:(id)a0 inDatabaseWithScope:(long long)a1;
- (id)cliDescription;
- (BOOL)updateStoreMetadata:(id *)a0;
- (unsigned long long)countChangeTokens;
- (id)changeTokenForZoneWithID:(id)a0 inDatabase:(id)a1;
- (id)changeTokenForDatabase:(id)a0;
- (void)setChangeToken:(id)a0 forZoneWithID:(id)a1 inDatabase:(id)a2;
- (void)setChangeToken:(id)a0 forDatabase:(id)a1;
- (void)purgeCachedChangeTokens;

@end
