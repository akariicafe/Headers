@class NSArray, NSMutableArray;

@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableArray *fetchedZones;
@property (retain, nonatomic) NSMutableArray *mutableCorruptRecords;
@property (readonly, nonatomic) NSArray *corruptRecords;

- (id)activityCreate;
- (id)nameForState:(unsigned long long)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)_fetchZones;
- (void)_checkRecordPCSForAllZones;

@end
