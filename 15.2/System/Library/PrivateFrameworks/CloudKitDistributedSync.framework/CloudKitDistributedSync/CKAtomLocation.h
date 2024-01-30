@class NSData, CKRecordZoneID, NSString;

@interface CKAtomLocation : NSObject <NSCopying>

@property (retain, nonatomic) NSData *identifier;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSString *name;

- (BOOL)isEqualToLocation:(id)a0;
- (id)initWithData:(id)a0 zoneID:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 zoneID:(id)a1;

@end
