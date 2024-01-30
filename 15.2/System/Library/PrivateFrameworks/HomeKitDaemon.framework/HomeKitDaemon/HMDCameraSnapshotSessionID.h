@class NSString, NSNumber;

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID <NSCopying>

@property (readonly) NSString *snapshotCharacteristicEventUUID;
@property (readonly) unsigned long long snapshotReason;
@property (readonly, getter=isSnapshotRequestForBulletin) BOOL snapshotRequestForBulletin;
@property (readonly) NSNumber *streamingTier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 cameraSessionAppID:(id)a2 descriptionString:(id)a3 spiClient:(BOOL)a4 snapshotReason:(unsigned long long)a5 snapshotRequestForBulletin:(BOOL)a6 snapshotCharacteristicEventUUID:(id)a7 streamingTier:(id)a8;
- (id)initWithAccessory:(id)a0 message:(id)a1;

@end
