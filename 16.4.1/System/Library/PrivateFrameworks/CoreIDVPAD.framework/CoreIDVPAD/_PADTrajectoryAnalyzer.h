@class NSNumber, NSMutableArray, NSString;
@protocol PADAlgorithms, PADAuditDataRepository;

@interface _PADTrajectoryAnalyzer : NSObject <PADTrajectoryAnalyzer> {
    id<PADAlgorithms> _algorithms;
    id<PADAuditDataRepository> _audit;
    unsigned long long _framesAnalyzed;
    unsigned long long _ignoredStitches;
    unsigned long long _stitchCount;
    double _maxNccLow;
    double _maxNccHigh;
    BOOL _isProcessingFrame;
    id /* block */ _currentFrameProcessingCompletion;
}

@property (nonatomic) long long taOptions;
@property (retain, nonatomic) NSMutableArray *assessmentsTA;
@property (readonly, nonatomic) NSNumber *assessment;
@property (readonly, nonatomic) NSNumber *maxNccHigh;
@property (readonly, nonatomic) NSNumber *maxNccLow;
@property (readonly, nonatomic) NSNumber *ignoredStitches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)processFrame:(id)a0;
- (void)_storeTAAssessment:(BOOL)a0 nccSignal:(double)a1 frame:(id)a2;
- (void)waitForCurrentFrameProcessingWithCompletion:(id /* block */)a0;

@end
