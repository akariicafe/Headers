@class VKCaptureTextDetectionResult, NSString, VKCaptureTextAnalysisRequest;

@interface VKCaptureTextFeedbackAssetProvider : NSObject <VKFeedbackAssetsProvider>

@property (readonly, nonatomic) VKCaptureTextAnalysisRequest *request;
@property (readonly, nonatomic) VKCaptureTextDetectionResult *detectionResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 detectionResult:(id)a1;
- (BOOL)saveAssetsToFeedbackAttachmentsFolder:(id)a0 error:(id *)a1;

@end
