@class NSObject, NSString, NSNumber, NSMutableArray;
@protocol PADFaceActionModuleDelegate, PADAlgorithms, OS_dispatch_queue;

@interface _PADFaceActionClassifier : PADVNSerialRequestsScheduler <PADFaceActionClassifier> {
    id<PADAlgorithms> _algorithms;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGSize { double width; double height; } _imageSize;
    BOOL _paused;
}

@property (retain, nonatomic) NSNumber *assessment;
@property (retain, nonatomic) NSMutableArray *timestampsFAC;
@property (retain, nonatomic) NSMutableArray *faceprintsID;
@property (retain, nonatomic) NSMutableArray *timestampsID;
@property (nonatomic) long long gesture;
@property (weak, nonatomic) id<PADFaceActionModuleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pause;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (void)restart;
- (BOOL)shouldProcessFrame:(id)a0;
- (id)requestsForFrame:(id)a0 handler:(id /* block */)a1;
- (void)handleObservationCompositeError:(id)a0;
- (id)observationsFromRequest:(id)a0;
- (void)analyzeObservationComposite:(id)a0;
- (unsigned long long)observationCompositeSetSize;
- (void)analyzeObservationCompositeSet:(id)a0;
- (BOOL)_isDetectingFaceMovementGesture;
- (id)initWithGesture:(long long)a0 algorithms:(id)a1;

@end
