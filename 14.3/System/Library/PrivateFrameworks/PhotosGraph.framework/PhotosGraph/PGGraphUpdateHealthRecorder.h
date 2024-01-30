@class NSString;

@interface PGGraphUpdateHealthRecorder : NSObject <PGGraphUpdateHealthRecording>

@property (readonly, nonatomic) unsigned long long numberOfDatabaseChangesReceivedInForeground;
@property (readonly, nonatomic) unsigned long long numberOfDatabaseChangesReceivedInBackground;
@property (readonly, nonatomic) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInForeground;
@property (readonly, nonatomic) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInBackground;
@property (readonly, nonatomic) unsigned long long numberOfTimesGraphUpdatePaused;
@property (readonly, nonatomic) unsigned long long maximumTransactionSize;
@property (readonly, nonatomic, getter=isChangeConsumer) BOOL changeConsumer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initForChangeConsumer:(BOOL)a0;
- (void)endRecordingInBackground:(BOOL)a0;
- (void)recordTransactionSize:(unsigned long long)a0;
- (void)recordNumberOfDatabaseChangesReceived:(unsigned long long)a0 inBackground:(BOOL)a1;
- (void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)a0 inBackground:(BOOL)a1;
- (void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)a0;
- (void)beginRecording;

@end
