@class NSString, CKRecordZoneID, CKRecordID;

@interface CKDAnonymousShareTuple : NSObject <NSSecureCoding, NSCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) CKRecordID *shareID;
@property (copy) NSString *ckAnonymousShareHashIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithZoneID:(id)a0 shareID:(id)a1;

@end
