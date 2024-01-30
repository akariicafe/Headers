@class CKServerChangeToken, NSSet, NSData, NSDictionary, NSMutableDictionary;

@interface WBBookmarkDatabaseSyncData : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_recordZoneIDsToLastServerChangeTokens;
    long long _lastChangeID;
    NSMutableDictionary *_recordZoneIDsToHashGenerators;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKServerChangeToken *lastPrivateDatabaseServerChangeToken;
@property (copy, nonatomic) CKServerChangeToken *lastSharedDatabaseServerChangeToken;
@property (nonatomic) BOOL didNotSaveRecordsAfterMigration;
@property (readonly, copy, nonatomic) NSData *encodedDatabaseSyncData;
@property (readonly, nonatomic) long long nextChangeID;
@property (nonatomic) unsigned long long minimumSyncAPIVersion;
@property (copy, nonatomic) NSSet *recordIDsToRefresh;
@property (copy, nonatomic) NSSet *auxiliaryRecordIDsToDelete;
@property (readonly, copy, nonatomic) NSDictionary *recordZoneIDsToHashGenerators;

+ (id)databaseSyncDataInDatabase:(void *)a0 databaseAccessor:(id)a1;
+ (id)databaseSyncDataWithContentsOfData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)lastServerChangeTokenForRecordZoneID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)writeToDatabase:(void *)a0 databaseAccessor:(id)a1;
- (void)clearAllLastServerChangeTokens;
- (id)init;
- (void)setLastServerChangeToken:(id)a0 forRecordZoneID:(id)a1;
- (void)setHashGenerator:(id)a0 forRecordZoneID:(id)a1;
- (id)hashGeneratorForRecordZoneID:(id)a0;
- (void).cxx_destruct;

@end
