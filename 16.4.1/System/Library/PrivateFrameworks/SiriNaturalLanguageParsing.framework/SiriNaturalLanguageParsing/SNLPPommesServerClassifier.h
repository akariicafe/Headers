@interface SNLPPommesServerClassifier : SNLPITFMClassifier

@property (nonatomic) float confidenceThreshold;

+ (id /* block */)_initializationBlock;
+ (id)classifierWithPathURL:(id)a0 error:(id *)a1;

- (id)responseForRequest:(id)a0 error:(id *)a1;

@end
