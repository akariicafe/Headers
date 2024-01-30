@class NSString, CKServerChangeToken, NSCKDatabaseMetadata, NSDate, NSNumber, NSSet;

@interface NSCKRecordZoneMetadata : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSNumber *hasRecordZoneNum;
@property (retain, nonatomic) NSNumber *hasSubscriptionNum;
@property (retain, nonatomic) NSString *ckRecordZoneName;
@property (retain, nonatomic) NSString *ckOwnerName;
@property (retain, nonatomic) CKServerChangeToken *currentChangeToken;
@property (retain, nonatomic) NSCKDatabaseMetadata *database;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (nonatomic) BOOL hasRecordZone;
@property (nonatomic) BOOL hasSubscription;
@property (retain, nonatomic) NSSet *records;
@property (retain, nonatomic) NSSet *mirroredRelationships;
@property (retain, nonatomic) NSSet *queries;
@property (nonatomic) BOOL supportsFetchChanges;
@property (nonatomic) BOOL supportsAtomicChanges;
@property (nonatomic) BOOL supportsRecordSharing;
@property (nonatomic) BOOL needsImport;
@property (nonatomic) BOOL needsRecoveryFromZoneDelete;
@property (nonatomic) BOOL needsRecoveryFromUserPurge;

+ (id)zoneMetadataForZoneID:(id)a0 inDatabaseWithScope:(long long)a1 forStore:(id)a2 inContext:(id)a3 error:(id *)a4;

@end
