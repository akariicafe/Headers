@class NSData, CKRecordZoneID;

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) CKRecordZoneID *zoneID;

- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0 zoneID:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
