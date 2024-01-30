@class NSString, OSLogEventLiveStream, OSLogEventStream, NSMutableArray, NSDate;

@interface CKLLog : NSObject

@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) OSLogEventStream *logEventStream;
@property (retain, nonatomic) OSLogEventLiveStream *liveStream;
@property (retain, nonatomic) NSMutableArray *streamObservers;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL wantsSimulatorLogs;
@property (nonatomic) BOOL onlyTestLogs;
@property (nonatomic) double startTimeOffset;
@property (retain, nonatomic) NSDate *absoluteStartDate;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) BOOL colorOutput;

+ (id)preparedLiveStreamFromLiveStore:(id)a0;
+ (id)preparedStreamFromStore:(id)a0;

- (id)_init;
- (void).cxx_destruct;
- (void)addStreamObserver:(id)a0;
- (id)initForHostStream;
- (id)initWithArchiveAtURL:(id)a0;
- (void)streamLogsWithCompletion:(id /* block */)a0;

@end
