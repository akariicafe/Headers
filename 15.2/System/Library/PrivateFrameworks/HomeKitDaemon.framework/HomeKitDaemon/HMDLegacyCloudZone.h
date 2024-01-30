@class NSSet;

@interface HMDLegacyCloudZone : HMBCloudZone

@property (readonly, nonatomic) NSSet *participants;
@property (readonly, nonatomic) long long keyStatus;

- (void).cxx_destruct;
- (id)initWithCloudDatabase:(id)a0 configuration:(id)a1 state:(id)a2;
- (id)encodeRecordFromModel:(id)a0 existingRecord:(id)a1 encodingContext:(id)a2 error:(id *)a3;
- (id)decodeModelFromRecord:(id)a0 externalRecordFields:(id)a1 source:(unsigned long long)a2 error:(id *)a3;
- (id)waitForPendingRebuild;
- (void)startUpWithLocalZone:(id)a0;

@end
