@class CSAudioRecordContext, CSAsset, NSString, NSArray, SLProgressiveCheckerAnalyzer, NSObject, SLProgressiveCheckerResult;
@protocol OS_dispatch_queue, CSAcousticSLProxyDelegate;

@interface CSAcousticSLProxy : NSObject <SLProgressiveCheckerAnalyzerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSString *configFile;
@property (retain, nonatomic) SLProgressiveCheckerAnalyzer *acousticAnalyzer;
@property (retain, nonatomic) NSArray *thresholds;
@property (nonatomic) unsigned long long supportedRecordType;
@property (nonatomic) BOOL sessionInProgress;
@property (nonatomic) BOOL isShadowModeEnabled;
@property (retain, nonatomic) SLProgressiveCheckerResult *latestResult;
@property (retain, nonatomic) CSAudioRecordContext *context;
@property (copy, nonatomic) id /* block */ reportResultBlock;
@property (weak, nonatomic) id<CSAcousticSLProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_timeStampString;
- (void)_reset;
- (void).cxx_destruct;
- (id)init;
- (void)setAsset:(id)a0 forTask:(id)a1;
- (void)_setAsset:(id)a0 forTask:(id)a1;
- (void)_startRequestWithContext:(id)a0 withVtei:(id)a1 completion:(id /* block */)a2;
- (void)_addAudio:(id)a0;
- (void)_reportResultToSiriDebugApp;
- (void)addAudio:(id)a0;
- (id)_createResultDict;
- (void)_logResultToVTDirectory:(id)a0;
- (BOOL)_handleUnintededRequests:(id)a0;
- (void)_reportResultToAnalytics;
- (void)analyzer:(id)a0 hasPartialResult:(id)a1;
- (void)analyzer:(id)a0 hasFinalResult:(id)a1;
- (void)startRequestWithContext:(id)a0 withVtei:(id)a1 completion:(id /* block */)a2;
- (void)stopRequest;
- (void)getLatestAcousticSLResult:(id /* block */)a0;

@end
