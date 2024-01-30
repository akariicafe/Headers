@class NSData, CKRecordZoneID;

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) CKRecordZoneID *zoneID;

- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithData:(id)a0 zoneID:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
