@class NSString, CKRecordZoneID;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (copy, nonatomic) NSString *recordType;

- (id)CKPropertiesDescription;
- (id)initWithZoneID:(id)a0;
- (id)initWithZoneID:(id)a0 subscriptionID:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRecordType:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
