@class NSString, NSUUID, NSDate;

@interface _DKSyncPeer : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *sourceDeviceID;
@property (readonly, copy, nonatomic) NSUUID *sourceDeviceUUID;
@property (copy, nonatomic) NSString *idsDeviceIdentifier;
@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSDate *lastSeenDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (nonatomic, getter=isCompanion) BOOL companion;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL me;
@property (copy, nonatomic) NSUUID *uuid;

- (id)initWithZoneName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIDSDeviceIdentifier:(id)a0 zoneName:(id)a1;
- (id)initWithIDSDeviceIdentifier:(id)a0;

@end
