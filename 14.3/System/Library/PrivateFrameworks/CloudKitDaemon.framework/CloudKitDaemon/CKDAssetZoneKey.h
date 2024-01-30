@class CKRecordZoneID;

@interface CKDAssetZoneKey : NSObject <NSCopying>

@property (retain, nonatomic) CKRecordZoneID *destinationZoneID;
@property (nonatomic) long long destinationDatabaseScope;
@property (retain, nonatomic) CKRecordZoneID *sourceZoneID;
@property (nonatomic) long long sourceDatabaseScope;
@property (readonly, nonatomic) BOOL isCrossOwner;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDestinationZoneID:(id)a0 destinationDatabaseScope:(long long)a1 sourceZoneID:(id)a2 sourceDatabaseScope:(long long)a3;
- (id)initWithDestinationZoneID:(id)a0 destinationDatabaseScope:(long long)a1;

@end
