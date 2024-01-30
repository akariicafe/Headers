@class UIMenu, NSArray, VKImageAnalyzerRequest, UIViewController, VKCVisualSearchResult;

@interface VKCImageAnalysisResult : VKCTextRecognitionResult

@property (readonly, nonatomic) NSArray *textDataDetectorElements;
@property (readonly, nonatomic) NSArray *mrcDataDetectorElements;
@property (readonly, nonatomic) NSArray *appClipDataDetectorElements;
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult;
@property (retain, nonatomic) VKImageAnalyzerRequest *request;
@property (nonatomic) int analysisRequestID;
@property (nonatomic) double totalBoundingBoxTextArea;
@property (nonatomic) double totalQuadTextArea;
@property (readonly, nonatomic) UIMenu *mrcMenu;
@property (weak, nonatomic) UIViewController *presentingViewControllerForMrcAction;
@property (readonly, nonatomic) NSArray *barcodeActions;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDocumentObservation:(id)a0 mrcDataDetectors:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (id)linesPlistFromSourceDocument:(id)a0;
- (id)dataDetectorsFromRecognitionResult:(id)a0;
- (id)wordsPlistFromRegion:(id)a0 sourceDocument:(id)a1;
- (id)wordPlistFromOutputRegion:(id)a0 document:(id)a1;
- (id)ddDictionaryFromDataDetectorElement:(id)a0;

@end
