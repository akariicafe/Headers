@interface VNRecognizeDocumentsRequestConfiguration : VNRecognizeTextRequestConfiguration

@property (nonatomic) BOOL detectionOnly;
@property (nonatomic) BOOL usesLanguageDetection;
@property (nonatomic) BOOL usesAlternateLineGrouping;
@property (nonatomic) unsigned long long maximumCandidateCount;

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
