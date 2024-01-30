@class NSUUID, NSNumber, NSString;

@interface CKDVolume : NSObject

@property (retain, nonatomic) NSUUID *volumeUUID;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSString *mountToPath;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithVolumeUUID:(id)a0 deviceID:(id)a1 mountToPath:(id)a2;

@end
