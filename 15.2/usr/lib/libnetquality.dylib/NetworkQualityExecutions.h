@class NSURL, NetworkQualityExecutionsSummary, NSMutableDictionary, NSObject, NetworkQualityExecutionsReporter, NSMutableArray, NQLocationManagerDelegate, NetworkQualityExecutionsConstraints, NSString, NetworkInterfaceInfo, NetworkQualityConfiguration, NSOperationQueue, NSNumber;
@protocol OS_dispatch_queue;

@interface NetworkQualityExecutions : NSObject <NSURLSessionDelegate> {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_executionsQueue;
    NSString *interfaceName;
    NSMutableArray *throughputDelegates;
    BOOL cancelled;
    NSURL *remoteConfigURL;
    NetworkQualityConfiguration *remoteConfig;
    NSMutableDictionary *results;
    NSString *clientIP;
    NetworkQualityExecutionsReporter *resultsReporter;
    float maxTime;
    struct test_context { struct test *test; struct execution *execution; BOOL fast; NSString *interfaceName; NetworkQualityConfiguration *config; } tp_ul_multi;
    struct test_context { struct test *test; struct execution *execution; BOOL fast; NSString *interfaceName; NetworkQualityConfiguration *config; } tp_dl_multi;
    NetworkQualityExecutionsSummary *summary;
    BOOL reportComplete;
}

@property (readonly) NetworkInterfaceInfo *interfaceInfo;
@property (retain) NetworkQualityExecutionsConstraints *constraints;
@property (readonly) long long operatorASN;
@property (readonly) NSString *operatorCompanyName;
@property (readonly) NQLocationManagerDelegate *locationDataSource;
@property (readonly) NSString *applicationId;
@property (readonly) NSString *executionsId;
@property (readonly) NSNumber *baseRTT;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)ratingForResponsivenessScore:(long long)a0;

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)initWithInterfaceName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)executeFastWithDownloadProgressHandler:(id /* block */)a0 uploadProgressHandler:(id /* block */)a1 downloadCompletionHandler:(id /* block */)a2 uploadCompletionHandler:(id /* block */)a3 responsivenessCompletionHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)initWithConfigurationURL:(id)a0 withInterfaceName:(id)a1 withApplicationId:(id)a2;
- (id)initWithInterfaceName:(id)a0 withApplicationId:(id)a1;
- (void)addValue:(id)a0 forTest:(id)a1;
- (BOOL)execULSingleTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 progressHandler:(id /* block */)a2 saturationHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (BOOL)execDLSingleTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 progressHandler:(id /* block */)a2 saturationHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (BOOL)execDLMultiTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 progressHandler:(id /* block */)a2 saturationHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (BOOL)execULMultiTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 progressHandler:(id /* block */)a2 saturationHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)createDefaultNSURLSessionConfiguration;
- (void)execH1Test:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 withResponseTimeContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 completionHandler:(id /* block */)a2;
- (void)execTCPExtendedTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 withTLSTest:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 withReqRespTest:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a2 completionHandler:(id /* block */)a3;
- (void)execULSingleTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 completionHandler:(id /* block */)a2;
- (void)execDLSingleTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 completionHandler:(id /* block */)a2;
- (void)execDLMultiTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 completionHandler:(id /* block */)a2;
- (void)execULMultiTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 completionHandler:(id /* block */)a2;
- (void)execTCPHandshakeTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 completionHandler:(id /* block */)a1;
- (id)getValueForTestName:(id)a0;
- (void)execSubTests:(const struct execution { char x0[256]; void /* function */ *x1; char x2[32][256]; } *)a0 atIndex:(int)a1 isFast:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)execTestWithContext:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 completionHandler:(id /* block */)a1;
- (BOOL)execDLMultiTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 maxTime:(float)a2 progressHandler:(id /* block */)a3 saturationHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (BOOL)execULMultiTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 pingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a1 maxTime:(float)a2 progressHandler:(id /* block */)a3 saturationHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (BOOL)execParallelMultiTest:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a0 ulContext:(const struct test_context { struct test *x0; struct execution *x1; BOOL x2; id x3; id x4; } *)a1 dlPingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a2 ulPingContext:(struct test { id x0; char x1[1024]; char x2[256]; BOOL x3; int x4; int x5; int x6; int x7; unsigned long long x8; int x9; } *)a3 maxTime:(float)a4 downloadProgressHandler:(id /* block */)a5 uploadProgressHandler:(id /* block */)a6 downloadSaturationHandler:(id /* block */)a7 uploadSaturationHandler:(id /* block */)a8 completionHandler:(id /* block */)a9;
- (void)initializeResultsReporterWithDefaults;
- (void)invokeReporterWithSummary:(id)a0;
- (void)_cancelWithOptionalError:(id)a0;
- (void)reallyExecuteFastWithDownloadProgressHandler:(id /* block */)a0 uploadProgressHandler:(id /* block */)a1 downloadCompletionHandler:(id /* block */)a2 uploadCompletionHandler:(id /* block */)a3 responsivenessCompletionHandler:(id /* block */)a4 reportingCompletionHandler:(id /* block */)a5;
- (void)reallyExecuteSplitWithDownloadProgressHandler:(id /* block */)a0 uploadProgressHandler:(id /* block */)a1 downloadCompletionHandler:(id /* block */)a2 uploadCompletionHandler:(id /* block */)a3 responsivenessCompletionHandler:(id /* block */)a4 reportingCompletionHandler:(id /* block */)a5;
- (id)initWithConfigurationURL:(id)a0 withInterfaceName:(id)a1;
- (id)initWithConfiguration:(id)a0 withInterfaceName:(id)a1 withApplicationId:(id)a2;
- (void)executeSplitWithDownloadProgressHandler:(id /* block */)a0 uploadProgressHandler:(id /* block */)a1 downloadCompletionHandler:(id /* block */)a2 uploadCompletionHandler:(id /* block */)a3 responsivenessCompletionHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)getResultsReporter;
- (void)acceptTestReportVisitor:(id)a0;

@end
