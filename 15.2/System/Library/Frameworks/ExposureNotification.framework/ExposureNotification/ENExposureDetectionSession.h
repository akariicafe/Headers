@class NSObject, ENManager, ENExposureConfiguration;
@protocol OS_dispatch_queue;

@interface ENExposureDetectionSession : NSObject <CUXPCCodable> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _finishCalled;
    unsigned long long _keysOutstanding;
    ENManager *_manager;
    unsigned long long _totalKeyCount;
}

@property (class, readonly, nonatomic) long long authorizationStatus;

@property (nonatomic) unsigned long long maximumKeyCount;
@property (retain, nonatomic) ENExposureConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)activateWithCompletionHandler:(id /* block */)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void)dealloc;
- (void)_activateWithCompletionHandler:(id /* block */)a0;
- (double)scoreWithExposureInfo:(id)a0 skip:(BOOL *)a1;
- (void)addDiagnosisKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishedDiagnosisKeysWithCompletionHandler:(id /* block */)a0;
- (void)getExposureInfoWithMaximumCount:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (double)estimateRiskWithExposureInfo:(id)a0 referenceTime:(double)a1 transmissionRiskLevel:(char *)a2 skip:(BOOL *)a3;
- (void)updateDaySummary:(id)a0 exposureInfo:(id)a1 score:(double)a2;

@end
