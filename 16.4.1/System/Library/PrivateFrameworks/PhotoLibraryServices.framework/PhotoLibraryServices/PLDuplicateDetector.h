@interface PLDuplicateDetector : NSObject

+ (short)currentSceneAnalysisUmbrellaVersion;
+ (BOOL)duplicateDetectorCompletedDateBackgroundMigrationAction:(id)a0;
+ (BOOL)duplicateDetectorCompletedPerceptualHashProcessingWithManagedObjectContext:(id)a0 pathManager:(id)a1;
+ (id)duplicateDetectorExcludeZeroByteFingerprintPredicateWithProperty:(id)a0;
+ (id)duplicateDetectorFilterProcessingStateWithPrefix:(id)a0 processingType:(unsigned long long)a1;
+ (id)duplicateDetectorProcessingFilterAssetsPredicateWithPrefix:(id)a0 processingType:(unsigned long long)a1 pathManager:(id)a2;
+ (id)predicateFormatToPrependAssetAttributeSubstitutionWithPrefix:(id)a0;

@end
