@interface VNDetectionprintTensor : VNEspressoModelImageprint

+ (id)currentVersion;
+ (unsigned long long)serializationMagicNumber;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)a0;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)a0;

@end
