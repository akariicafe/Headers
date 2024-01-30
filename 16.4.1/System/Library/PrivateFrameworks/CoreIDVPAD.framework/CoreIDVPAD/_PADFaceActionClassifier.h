@class PADModelLoader, NSString, NSObject, NSNumber, NSMutableArray;
@protocol PADFaceActionModuleDelegate, PADAlgorithms, OS_dispatch_queue;

@interface _PADFaceActionClassifier : PADVNSerialRequestsScheduler <PADFaceActionClassifier> {
    id<PADAlgorithms> _algorithms;
    PADModelLoader *_models;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGSize { double width; double height; } _imageSize;
    long long _facOption;
    BOOL _hasSetRandomIDFrames;
}

@property (retain, nonatomic) NSNumber *assessment;
@property (retain, nonatomic) NSMutableArray *timestampsFAC;
@property (readonly, nonatomic) NSMutableArray *timestampsReferenceFAC;
@property (retain, nonatomic) NSMutableArray *faceprintsID;
@property (retain, nonatomic) NSMutableArray *timestampsID;
@property (nonatomic) long long gesture;
@property (readonly, nonatomic) BOOL idMatchingFramesSelected;
@property (weak, nonatomic) id<PADFaceActionModuleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)restart;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)analyzeObservationComposite:(id)a0;
- (id)requestsForFrame:(id)a0 handler:(id /* block */)a1;
- (void)analyzeObservationCompositeSet:(id)a0;
- (BOOL)_isDetectingFaceMovementGesture;
- (void)_appendIDFaceprintResult:(id)a0 faceprint:(id)a1;
- (void)_handleIDMatchingAndReferenceFramesForFACResult:(id)a0 withObservationCompositeSet:(id)a1;
- (void)_processObservationCompositeSetForIDMatchingFrames:(id)a0;
- (void)_processObservationCompositeSetWithFAC:(id)a0;
- (void)handleObservationCompositeError:(id)a0;
- (id)initWithGesture:(long long)a0 algorithms:(id)a1 models:(id)a2;
- (unsigned long long)observationCompositeSetSize;
- (id)observationsFromRequest:(id)a0;
- (void)setFACOption:(long long)a0;
- (BOOL)shouldProcessFrame:(id)a0;

@end
