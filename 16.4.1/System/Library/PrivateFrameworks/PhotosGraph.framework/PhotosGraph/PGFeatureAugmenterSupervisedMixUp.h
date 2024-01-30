@class NSString;

@interface PGFeatureAugmenterSupervisedMixUp : PGFeatureAugmenterMixUp <PGFeatureAugmenterSupervised>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)name;

- (id)labeledFloatVectorsWithLabeledFloatVectors:(id)a0 error:(id *)a1;

@end
