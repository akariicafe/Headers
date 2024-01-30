@class MLSVMEngine;

@interface MLSupportVectorClassifier : MLClassifier

@property (retain) MLSVMEngine *engine;

+ (id)featureValueWithObject:(id)a0;

- (id)initWithEngine:(id)a0 description:(id)a1 configuration:(id)a2 error:(id *)a3;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
