@class NSArray, ENExposureDetectionSummary, NSMutableDictionary, ENManager, NSProgress, NSMutableArray, NSObject, ENExposureConfiguration;
@protocol OS_dispatch_queue;

@interface ENExposureDetectionClientSession : NSObject <CUXPCCodable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _guardActivateDone;
    BOOL _guardAddFileDone;
    BOOL _guardFinishDone;
    int _runState;
    ENExposureDetectionSummary *_summary;
    NSMutableArray *_mainFileURLs;
    unsigned long long _mainFileIndex;
    unsigned long long _mainFileCount;
    NSMutableDictionary *_signatureURLMap;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) ENExposureConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSArray *diagnosisKeyURLs;
@property (retain, nonatomic) ENManager *manager;
@property (retain, nonatomic) NSProgress *progress;

- (void)_run;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_reportError:(id)a0 where:(const char *)a1;
- (BOOL)_runFinishStart;
- (BOOL)_runActivateStart;
- (BOOL)_runAddFile;
- (void)_runDetectionDone;

@end
