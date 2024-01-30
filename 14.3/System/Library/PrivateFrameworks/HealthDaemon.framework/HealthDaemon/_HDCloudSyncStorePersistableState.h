@class NSString, CKServerChangeToken, NSDictionary, NSDate;

@interface _HDCloudSyncStorePersistableState : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *ownerIdentifier;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken;
@property (readonly, nonatomic) unsigned long long baselineEpoch;
@property (readonly, nonatomic) NSDate *rebaseDeadline;
@property (readonly, nonatomic) NSDate *lastSyncDate;
@property (readonly, nonatomic) NSDictionary *emptyZoneDateByZoneID;
@property (readonly, nonatomic) NSDate *lastCheckDate;
@property (readonly, nonatomic) BOOL hasEncounteredGapInCurrentEpoch;
@property (readonly, nonatomic) int syncProtocolVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stateByRecordingLastSyncDate:(id)a0;
- (id)stateByRecordingLastCheckDate:(id)a0;
- (id)initWithServerChangeToken:(id)a0 baselineEpoch:(unsigned long long)a1 rebaseDeadline:(id)a2 lastSyncDate:(id)a3 emptyZones:(id)a4 lastCheckDate:(id)a5 ownerIdentifier:(id)a6 containerIdentifier:(id)a7 syncProtocolVersion:(int)a8;
- (id)stateWithGapEncountered:(BOOL)a0;
- (id)stateByResettingRebaselineDeadline;
- (id)stateWithServerChangeToken:(id)a0;
- (id)stateWithEmptyZones:(id)a0;
- (id)stateWithBaselineEpoch:(unsigned long long)a0;
- (id)stateWithSyncProtocolVersion:(int)a0;

@end
