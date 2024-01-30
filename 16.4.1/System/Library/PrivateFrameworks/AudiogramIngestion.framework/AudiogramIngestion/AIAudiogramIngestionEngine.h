@class NSString, VNCoreMLModel, AIAudiogramAssetManager, NSObject;
@protocol OS_dispatch_queue, AIAudiogramIngestionEngineDelegate;

@interface AIAudiogramIngestionEngine : NSObject <AIAudiogramAssetManagerDelegate>

@property (weak, nonatomic) id<AIAudiogramIngestionEngineDelegate> delegate;
@property (retain, nonatomic) VNCoreMLModel *model;
@property (retain, nonatomic) AIAudiogramAssetManager *assetManager;
@property (nonatomic) BOOL isRetrievingLatestModel;
@property (nonatomic) BOOL isRetrievingLatestModelSilently;
@property (retain, nonatomic) NSString *modelLabelLeftEarSymbol;
@property (retain, nonatomic) NSString *modelLabelRightEarSymbol;
@property (retain, nonatomic) NSString *modelLabelGraph;
@property (nonatomic) float modelLabelConfidenceThreshold;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue;

- (BOOL)isAvailable;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_validMapForPointPairs:(id)a0 stepDistance:(double)a1 forValueDifference:(double)a2 forAxis:(unsigned long long)a3;
- (void)audiogramFromImages:(id)a0 completion:(id /* block */)a1;
- (void)modelDownloadProgressDidUpdate:(float)a0;
- (void)_setAudiogramAxisError:(unsigned long long)a0 onError:(id *)a1;
- (id)_audiogramFromSymbols:(id)a0 onAudiogramMap:(id)a1;
- (id)_audiogramFromSymbols:(id)a0 recognizedText:(id)a1;
- (id)_audiogramMapFromRecognizedText:(id)a0;
- (id)_combineAudiograms:(id)a0;
- (id)_cropEdgesFromImage:(id)a0 graphRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 symbolsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_cropResultsFromImage:(id)a0 observations:(id)a1;
- (id)_formatNumbersFromRecognizedText:(id)a0;
- (id)_groupNumbersByAxisFromRecognizedText:(id)a0;
- (BOOL)_isValidObject:(id)a0 toObject:(id)a1 withValueDifference:(double)a2 stepDistance:(double)a3 forAxis:(unsigned long long)a4;
- (void)_loadModelFromAssetPath:(id)a0 assetProperties:(id)a1;
- (double)_meanFromNumbers:(id)a0;
- (id)_observationsFromCIImage:(id)a0;
- (unsigned int)_propertyOrientationFromOrientation:(long long)a0;
- (id)_rectsOfGraphFromImage:(id)a0 objectData:(id)a1;
- (id)_rectsOfSymbolsFromImage:(id)a0 objectData:(id)a1;
- (id)_removeDuplicateSetsFromTextSets:(id)a0;
- (void)_retrieveModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shrinkRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 width:(double)a1 height:(double)a2 insideBounds:(struct CGSize { double x0; double x1; })a3;
- (id)_sortAndRemoveInvalidAxisValues:(id)a0 forAxis:(unsigned long long)a1 error:(id *)a2;
- (double)_stddevFromNumbers:(id)a0;
- (void)_stopRetrievingLatestModel;
- (id)_textFromAudiogramImage:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_validPointsFromMap:(id)a0 forValues:(id)a1;
- (id)_valueDifferencesForValues:(id)a0 stepDistance:(double)a1 forAxis:(unsigned long long)a2;
- (double)_zScoreFromNumber:(double)a0 mean:(double)a1 stddev:(double)a2;
- (id)audiogramFromImage:(id)a0;
- (id)audiogramFromImages:(id)a0;
- (void)modelDidUpdate:(id)a0 assetProperties:(id)a1 assetVersion:(unsigned long long)a2 withError:(id)a3;
- (void)startRetrievingLatestModel;
- (void)startRetrievingLatestModelSilently;
- (void)useCustomModelFromURL:(id)a0 modelProperties:(id)a1;

@end
