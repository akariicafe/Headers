@class MKFCKHome, NSString, NSUUID, HAPPairingIdentity, NSDate, NSSet;

@interface MKFCKUser : MKFCKHomeObject

@property (copy, nonatomic) NSString *accountHandle;
@property (nonatomic) long long announceAccessLevel;
@property (nonatomic) long long camerasAccessLevel;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) HAPPairingIdentity *pairingIdentity;
@property (nonatomic) long long privilege;
@property (nonatomic) BOOL remoteAccessAllowed;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSSet *automations;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKHome *ownedHome;

+ (id)fetchRequest;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
