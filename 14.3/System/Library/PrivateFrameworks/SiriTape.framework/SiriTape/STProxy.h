@class STProxySocketDelegate, NSString, NSArray, NSURL, NSMutableArray, NSObject, GCDAsyncSocket;
@protocol OS_dispatch_queue, STAceObjectHandler;

@interface STProxy : NSObject {
    GCDAsyncSocket *_socket;
    STProxySocketDelegate *_proxySocketDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _useSpeechLogs;
    BOOL _autoExit;
    unsigned long long _speechLogsIndex;
    NSArray *_speechLogs;
    NSURL *_testSpeechURL;
    NSMutableArray *_replayCompletions;
}

@property (retain, nonatomic) NSString *previousAccountIdentifier;
@property (retain, nonatomic) id<STAceObjectHandler> aceObjectHandler;

+ (id)sharedServer;

- (void)disconnect;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserverActionForType:(long long)a0 withBlock:(id /* block */)a1;
- (void)observeAndLogClientFlowPerformanceMetrics;
- (void)didFinishedOneRequestAndExpectMore:(BOOL)a0;
- (void)_startProxyWithActiveServerURL:(id)a0 handler:(id)a1 replayFileURL:(id)a2;
- (void)_loadSpeechLogsFromURL:(id)a0;
- (void)_sendNextSpeechRequest;
- (void)startProxyWithActiveServerURL:(id)a0 handler:(id)a1;
- (void)startProxyRecordingWithActiveServerURL:(id)a0;
- (void)startProxyServerWithReplayFileURL:(id)a0;
- (void)startProxyServerWithReplayFileURL:(id)a0 speechLogURL:(id)a1;
- (void)updateLocalScriptsForReplayFile:(id)a0 withCompletion:(id /* block */)a1;
- (void)addReplayCompletion:(id /* block */)a0;

@end
