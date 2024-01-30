@class NSString, VKCImageAnalysisResult, NSArray, VKFeedbackProvider;

@interface VKImageAnalysis : NSObject <NSSecureCoding> {
    VKFeedbackProvider *_feedbackProvider;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VKCImageAnalysisResult *imageAnalysisResult;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSArray *rectangleObservations;
@property (readonly, nonatomic) NSArray *filteredNormalizedRectangleQuads;
@property (readonly, nonatomic) NSString *transcript;
@property (nonatomic) VKFeedbackProvider *feedbackProvider;
@property (readonly, nonatomic) int analysisRequestID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_attributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mrcMenu;
- (id)allLines;
- (id)barcodeActions;
- (BOOL)hasResultsForAnalysisTypes:(unsigned long long)a0;
- (void)setPresentingViewControllerForMrcAction:(id)a0;
- (id)textDataDetectors;
- (void)translateFrom:(id)a0 to:(id)a1 withCompletion:(id /* block */)a2;
- (void)translateTo:(id)a0 withCompletion:(id /* block */)a1;
- (unsigned long long)countOfDataDetectorsWithTypes:(unsigned long long)a0;
- (BOOL)_hasVisualSearchElements;
- (id)analysisByReplacingTypes:(unsigned long long)a0 fromAnalysis:(id)a1;
- (id)initWithAnalysisResult:(id)a0;
- (id)presentingViewControllerForMrcAction;
- (BOOL)writeSecureCodedArchiveToURL:(id)a0 error:(id *)a1;

@end
