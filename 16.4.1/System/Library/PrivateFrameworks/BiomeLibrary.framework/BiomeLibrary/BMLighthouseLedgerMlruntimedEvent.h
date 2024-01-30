@class BMLighthouseLedgerTrialIdentifiers, NSString, BMLighthouseLedgerMlruntimedEventScheduleStatus, BMLighthouseLedgerMlruntimedEventTaskEvent, NSDate;

@interface BMLighthouseLedgerMlruntimedEvent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventScheduleStatus *activityScheduleStatus;
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventTaskEvent *taskFetched;
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventTaskEvent *taskScheduled;
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventTaskEvent *taskCompleted;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithTrialIdentifiers:(id)a0 contextID:(id)a1 timestamp:(id)a2 activityScheduleStatus:(id)a3 taskFetched:(id)a4 taskScheduled:(id)a5 taskCompleted:(id)a6;

@end
