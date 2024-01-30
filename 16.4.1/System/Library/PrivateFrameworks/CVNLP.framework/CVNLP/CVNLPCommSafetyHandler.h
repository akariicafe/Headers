@class NSObject, CVNLPPerformance, NSDictionary, CVNLPCommSafetyTextAnalyzer, CVNLPCommSafetyImageAnalyzer;
@protocol OS_dispatch_queue;

@interface CVNLPCommSafetyHandler : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) CVNLPCommSafetyImageAnalyzer *imageAnalyzer;
@property (readonly) CVNLPCommSafetyTextAnalyzer *textAnalyzer;
@property (readonly) NSDictionary *options;
@property (readonly, nonatomic) CVNLPPerformance *perfResults;

- (void).cxx_destruct;
- (id)performanceStatistics;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (long long)classifyImage:(struct CGImage { } *)a0 error:(id *)a1;
- (long long)classifyPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)classifyPixelBuffer:(struct __CVBuffer { } *)a0 stagedText:(id)a1 inConversationWithIdentifier:(id)a2 error:(id *)a3;
- (id)classifyPixelBuffer:(struct __CVBuffer { } *)a0 startDate:(id)a1 endDate:(id)a2 stagedText:(id)a3 inConversationWithIdentifier:(id)a4 error:(id *)a5;
- (id)generateClassificationScoresForImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)getOperatingPointDataForClassName:(id)a0 error:(id *)a1;
- (void)processConversationsWithStartDate:(id)a0 endDate:(id)a1 previousClassifications:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)processText:(id)a0 inConversationWithIdentifier:(id)a1 date:(id)a2 error:(id *)a3;

@end
