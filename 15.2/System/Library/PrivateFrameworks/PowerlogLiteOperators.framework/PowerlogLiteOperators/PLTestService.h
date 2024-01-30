@class PLXPCResponderOperatorComposition;

@interface PLTestService : PLService

@property (retain) PLXPCResponderOperatorComposition *presubmissionTestResponder;

+ (void)load;

- (void).cxx_destruct;
- (id)init;
- (id)presubmissionTest_testEPLMode:(id)a0 withParam:(id)a1;
- (void)initOperatorDependancies;

@end
