@class NSString;

@interface BMSiriTaskAggregationStatistics : BMEventBase <BMStoreData>

@property (readonly, nonatomic) unsigned int completedSystemTasks;
@property (nonatomic) BOOL hasCompletedSystemTasks;
@property (readonly, nonatomic) unsigned int failedSystemTasks;
@property (nonatomic) BOOL hasFailedSystemTasks;
@property (readonly, nonatomic) unsigned int cancelledSystemTasks;
@property (nonatomic) BOOL hasCancelledSystemTasks;
@property (readonly, nonatomic) unsigned int tasksPerformedWithUI;
@property (nonatomic) BOOL hasTasksPerformedWithUI;
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
- (id)initWithCompletedSystemTasks:(id)a0 failedSystemTasks:(id)a1 cancelledSystemTasks:(id)a2 tasksPerformedWithUI:(id)a3;

@end
