@class NSNumber, NSString, NSArray;

@interface AMDDataSync : NSObject

@property (retain, nonatomic) NSNumber *deviceForgetThresholdDays;
@property (retain, nonatomic) NSNumber *eventsDeltaSize;
@property (retain, nonatomic) NSNumber *eventLifetimeDays;
@property (retain, nonatomic) NSNumber *fullSyncDeviceResetThresholdDays;
@property (retain, nonatomic) NSNumber *fullSyncEventsDeltaSize;
@property (retain, nonatomic) NSString *localDeviceId;
@property (retain, nonatomic) NSArray *streamsToSync;

+ (id)fetchDeviceID:(id *)a0;
+ (id)generateDeviceIDFileAtLocation:(id)a0 error:(id *)a1;
+ (id)processDataReplicationPayload:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)clearUserDataForDevice:(id)a0 fromTimestamp:(id)a1;
- (id)createDeviceEntryWithDevicesData:(id)a0 error:(id *)a1;
- (id)fetch:(id)a0 SortedEventListFromTimestamp:(id)a1 forCurrentDevice:(BOOL)a2 error:(id *)a3;
- (id)fetch:(id)a0 SortedEventListFromTimestamp:(id)a1 onlyForCurrentDevice:(BOOL)a2 forStream:(id)a3 error:(id *)a4;
- (id)fetchEventsForStream:(id)a0 withPredicates:(id)a1 error:(id *)a2;
- (id)fetchLastReadTimestampFromPayload:(id)a0;
- (id)fetchLastReadTimestampFromPayload:(id)a0 forStream:(id)a1;
- (id)filterEventsList:(id)a0 withLastReadTimestamp:(id)a1;
- (id)findAvailableDeviceForFullSyncIn:(id)a0;
- (id)generateFullSyncPayloadWithDevicesData:(id)a0 error:(id *)a1;
- (id)ingestDataFromDevice:(id)a0 withDevicePayload:(id)a1 forStream:(id)a2 fromTimestamp:(id)a3 error:(id *)a4;
- (id)ingestEventsIntoCoreData:(id)a0 withPreviousCheckpoint:(id *)a1 andStreamCheckpointDict:(id)a2 error:(id *)a3;
- (id)ingestEventsIntoSQLite:(id)a0 forStream:(id)a1 withPreviousCheckpoint:(id *)a2 andStreamCheckpointDict:(id)a3 error:(id *)a4;
- (void)ingestFullSyncEventsFor:(id)a0 withDeviceData:(id)a1 error:(id *)a2;
- (id)initWithDataReplicationConfig:(id)a0 error:(id *)a1;
- (id)performDataReplicationPayloadUpdates:(id)a0 withDeviceRegistry:(id)a1 error:(id *)a2;
- (void)performEventDeltaUpdateFor:(id)a0 withDeviceData:(id)a1 error:(id *)a2;
- (id)pruneInactiveDevicesFrom:(id)a0;
- (void)pushFullSyncDataFrom:(id)a0 withDeviceData:(id)a1 error:(id *)a2;
- (id)updateDataDeletionDict:(id)a0 withDevicesData:(id)a1 error:(id *)a2;

@end
