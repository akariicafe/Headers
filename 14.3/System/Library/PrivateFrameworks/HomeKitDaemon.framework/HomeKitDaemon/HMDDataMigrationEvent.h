@class NSString, AWDHomeKitDataModelMigration;

@interface HMDDataMigrationEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) AWDHomeKitDataModelMigration *metric;
@property (readonly, nonatomic) unsigned long long migrationStart;
@property (readonly, nonatomic) unsigned long long migrationEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uuid;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (void)migrationCompleted;
- (unsigned long long)migrationDurationInMilliseconds;

@end
