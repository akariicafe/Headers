@class NSUUID;
@protocol HMBLocalZoneID;

@interface HMBLocalSQLContextRowZone : HMFObject

@property (nonatomic) unsigned long long zoneRow;
@property (retain, nonatomic) id<HMBLocalZoneID> identifier;
@property (retain, nonatomic) NSUUID *replication;

- (id)initWithZoneRow:(unsigned long long)a0;
- (id)initWithZoneRow:(unsigned long long)a0 name:(id)a1 token:(id)a2;
- (id)debugDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
