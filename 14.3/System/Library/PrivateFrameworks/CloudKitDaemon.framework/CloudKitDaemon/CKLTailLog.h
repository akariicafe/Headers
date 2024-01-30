@class NSString, OSLogPersistence, OSActivityStream, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKLTailLog : OSActivityStream <OSLogPersistenceDelegate, OSActivityStreamDelegate>

@property (retain, nonatomic) OSLogPersistence *logPersistence;
@property (retain, nonatomic) OSActivityStream *activityStream;
@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) BOOL stillReadingFromArchive;
@property (nonatomic) BOOL continueToReturnResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)streamDidStop:(id)a0;
- (BOOL)activityStream:(id)a0 results:(id)a1;
- (void)streamDidFail:(id)a0 error:(id)a1;
- (void)fetchFromStartDate:(id)a0 toEndDate:(id)a1;
- (void)start;
- (void)persistenceDidFinishReadingForStartDate:(id)a0 endDate:(id)a1;
- (BOOL)persistence:(id)a0 results:(id)a1 error:(id)a2;
- (void)startFromStartDate:(id)a0;

@end
