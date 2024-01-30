@class PLXPCResponderOperatorComposition;

@interface PLTestService : PLService

@property (retain) PLXPCResponderOperatorComposition *presubmissionTestResponder;

+ (void)load;

- (void)initOperatorDependancies;
- (id)init;
- (void).cxx_destruct;
- (id)presubmissionTest_testEPLMode:(id)a0 withParam:(id)a1;

@end
