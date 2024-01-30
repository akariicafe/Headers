@class CKRecordID, NSData, CKRecordZoneID, CKDSharePCSData, NSDate;

@interface CKDZonePCSData : CKDPCSData <NSSecureCoding, NSCopying> {
    struct _OpaquePCSShareProtection { } *_zoneishPCS;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSData *zoneishPublicKeyID;
@property (nonatomic) struct _OpaquePCSShareProtection { } *zoneishPCS;
@property (copy, nonatomic) NSData *zoneishPCSData;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;
@property (retain, nonatomic) NSDate *zonePCSModificationDate;

+ (id)dataWithZone:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)itemID;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithZone:(id)a0;

@end
