@class QRRepetitionDetectionPredictor;

@interface CDMRepetitionDetectionService : CDMDAGBaseService

@property (retain, nonatomic) QRRepetitionDetectionPredictor *repetitionDetector;

+ (id)assetFolderName;
+ (id)trialFactorName;

- (BOOL)isEnabled;
- (id)handle:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAssetRequired;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;
- (id)getPredictor:(id)a0 FilesPath:(id)a1 status:(id *)a2;
- (id)doInference:(id)a0 status:(id *)a1;

@end
