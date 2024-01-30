@interface CDMMentionDetectorServiceUtils : NSObject

+ (id)buildMDRequestWithUtterance:(id)a0 tokenChain:(id)a1 embedding:(id)a2 nluRequestId:(id)a3 resultCandidateId:(id)a4 cdmRequestId:(id)a5;
+ (void)logMDRequestToFile:(id)a0;
+ (void)logMDResponseToFile:(id)a0;

@end
