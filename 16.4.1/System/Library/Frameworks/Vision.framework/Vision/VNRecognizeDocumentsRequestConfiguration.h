@interface VNRecognizeDocumentsRequestConfiguration : VNRecognizeTextRequestConfiguration

@property (nonatomic) BOOL detectionOnly;
@property (nonatomic) BOOL usesAlternateLineGrouping;
@property (nonatomic) unsigned long long maximumCandidateCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
