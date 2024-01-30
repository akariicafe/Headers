@class HDCloudSyncCodableSharedSummaryRecord, NSUUID, NSString, NSArray, NSData;

@interface HDCloudSyncSharedSummaryRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryRecord *_underlyingSummaryRecord;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *package;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *compatibilityVersion;
@property (readonly, copy, nonatomic) NSArray *objectTypes;
@property (readonly, copy, nonatomic) NSArray *authorizationCategories;
@property (readonly, copy, nonatomic) NSData *summaryData;

+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;
+ (BOOL)requiresUnderlyingMessage;
+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 UUID:(id)a1;
+ (BOOL)isSummaryRecord:(id)a0;

- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)description;
- (id)printDescription;
- (void).cxx_destruct;
- (id)serializeUnderlyingMessage;
- (id)initInZone:(id)a0 UUID:(id)a1 package:(id)a2 name:(id)a3 version:(id)a4 compatibilityVersion:(id)a5 objectTypes:(id)a6 authorizationCategories:(id)a7 summaryData:(id)a8;

@end
