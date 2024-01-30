@class MLMultiArray, NSSet;

@interface CBCE3Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *CBCE3_Q0_output;
@property (retain, nonatomic) MLMultiArray *CBCE3_Q1_output;
@property (retain, nonatomic) MLMultiArray *CBCE3_Q2_output;
@property (retain, nonatomic) MLMultiArray *CBCE3_Q3_output;
@property (retain, nonatomic) MLMultiArray *CBCE3_Q4_output;
@property (retain, nonatomic) MLMultiArray *strength_output;
@property (retain, nonatomic) MLMultiArray *uncertainty;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithCBCE3_Q0_output:(id)a0 CBCE3_Q1_output:(id)a1 CBCE3_Q2_output:(id)a2 CBCE3_Q3_output:(id)a3 CBCE3_Q4_output:(id)a4 strength_output:(id)a5 uncertainty:(id)a6;

@end
