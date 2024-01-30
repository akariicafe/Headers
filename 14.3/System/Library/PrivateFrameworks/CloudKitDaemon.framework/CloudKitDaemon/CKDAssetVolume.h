@class NSNumber, NSUUID;

@interface CKDAssetVolume : CKObject

@property (retain, nonatomic) NSNumber *volumeIndex;
@property (retain, nonatomic) NSUUID *volumeUUID;

+ (id)CKSQLiteClassName;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;

@end
