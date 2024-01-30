@class VKCImageAnalysisResult, NSString, VKFeedbackProvider;

@interface VKImageAnalysis : NSObject <NSSecureCoding> {
    VKFeedbackProvider *_feedbackProvider;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VKCImageAnalysisResult *imageAnalysisResult;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) VKFeedbackProvider *feedbackProvider;
@property (readonly, nonatomic) int analysisRequestID;

- (void)encodeWithCoder:(id)a0;
- (id)mrcMenu;
- (void)setPresentingViewControllerForMrcAction:(id)a0;
- (BOOL)hasResultsForAnalysisTypes:(unsigned long long)a0;
- (id)allLines;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)textDataDetectors;
- (unsigned long long)countOfDataDetectorsWithTypes:(unsigned long long)a0;
- (id)presentingViewControllerForMrcAction;
- (id)barcodeActions;
- (id)initWithAnalysisResult:(id)a0;
- (BOOL)writeSecureCodedArchiveToURL:(id)a0 error:(id *)a1;
- (BOOL)_hasVisualSearchElements;
- (id)analysisByReplacingTypes:(unsigned long long)a0 fromAnalysis:(id)a1;

@end
