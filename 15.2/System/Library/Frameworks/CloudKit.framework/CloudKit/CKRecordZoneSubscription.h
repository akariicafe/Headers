@class NSString, CKRecordZoneID;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (copy, nonatomic) NSString *recordType;

- (id)initWithZoneID:(id)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithZoneID:(id)a0 subscriptionID:(id)a1;
- (void)setRecordType:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
