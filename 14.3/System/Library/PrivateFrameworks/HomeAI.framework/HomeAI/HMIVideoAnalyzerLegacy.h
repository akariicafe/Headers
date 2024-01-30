@class NSString, NSMutableDictionary, NSObject, HMICameraVideoAnalyzer;
@protocol OS_dispatch_group;

@interface HMIVideoAnalyzerLegacy : HMIVideoAnalyzer <HMICameraVideoAnalyzerDelegate, HMFLogging> {
    NSObject<OS_dispatch_group> *_group;
    NSMutableDictionary *_configurationBySequenceNumber;
    unsigned long long _pendingFragments;
    BOOL _failed;
    BOOL _cancelled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sessionDuration;
}

@property (readonly) HMICameraVideoAnalyzer *legacyAnalyzer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)cancel;
- (void)finish;
- (void).cxx_destruct;
- (void)flushAsync;
- (id)homePersonManager;
- (unsigned long long)status;
- (void)setHomePersonManager:(id)a0;
- (id)externalPersonManagers;
- (void)setExternalPersonManagers:(id)a0;
- (id)initWithConfiguration:(id)a0 identifier:(id)a1;
- (void)analyzer:(id)a0 didAnalyzeFragment:(id)a1 withResult:(id)a2;
- (void)analyzer:(id)a0 didNotAnalyzeFragment:(id)a1 withResult:(id)a2;
- (void)analyzer:(id)a0 didFailAnalysisForFragment:(id)a1 withError:(id)a2;
- (void)setAnalysisFPS:(double)a0;
- (id)initWithConfiguration:(id)a0 identifier:(id)a1 remote:(BOOL)a2;
- (void)_handleFragment:(id)a0 withResult:(id)a1 events:(id)a2 outcome:(id)a3;
- (id)_makeFrameResult:(id)a0 withPresentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)analyzeFragment:(id)a0 configuration:(id)a1;
- (void)setMonitored:(BOOL)a0;

@end
