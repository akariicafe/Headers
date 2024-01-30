@class NSString, OSLogPersistence, OSActivityStream, NSDate, NSMutableArray;

@interface CKLLog : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate>

@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) OSLogPersistence *archiveSource;
@property (retain, nonatomic) OSActivityStream *streamSource;
@property (retain, nonatomic) NSMutableArray *streamObservers;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL wantsSimulatorLogs;
@property (nonatomic) BOOL onlyTestLogs;
@property (nonatomic) double startTimeOffset;
@property (retain, nonatomic) NSDate *absoluteStartDate;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) BOOL colorOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_init;
- (void)streamDidStop:(id)a0;
- (BOOL)activityStream:(id)a0 results:(id)a1;
- (void)streamDidFail:(id)a0 error:(id)a1;
- (void)persistenceDidFinishReadingForStartDate:(id)a0 endDate:(id)a1;
- (BOOL)persistence:(id)a0 results:(id)a1 error:(id)a2;
- (void)_configureStreamSource:(id)a0;
- (id)initForHostStream;
- (id)initWithRemoteDevice:(id)a0;
- (id)initWithArchiveAtURL:(id)a0;
- (void)addStreamObserver:(id)a0;
- (void)streamLogsWithCompletion:(id /* block */)a0;

@end
