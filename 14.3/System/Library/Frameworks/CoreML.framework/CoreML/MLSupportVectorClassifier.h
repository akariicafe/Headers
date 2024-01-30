@class MLSVMEngine;

@interface MLSupportVectorClassifier : MLClassifier

@property (retain) MLSVMEngine *engine;

+ (id)featureValueWithObject:(id)a0;

- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 interface:(id)a1 metadata:(id)a2 configuration:(id)a3 error:(id *)a4;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;

@end
