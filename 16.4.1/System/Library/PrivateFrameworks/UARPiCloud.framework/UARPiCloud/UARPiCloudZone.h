@class CKServerChangeToken, CKRecordZoneID, NSString;

@interface UARPiCloudZone : NSObject

@property (copy) CKRecordZoneID *zoneID;
@property (copy) CKServerChangeToken *changeToken;
@property (copy) NSString *containerID;

- (void).cxx_destruct;
- (id)initWithZoneID:(id)a0 containerID:(id)a1;

@end
