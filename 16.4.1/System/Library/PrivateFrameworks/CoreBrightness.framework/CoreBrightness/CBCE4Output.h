@class MLMultiArray, NSSet;

@interface CBCE4Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *CBCE4_Q0_output;
@property (retain, nonatomic) MLMultiArray *CBCE4_Q1_output;
@property (retain, nonatomic) MLMultiArray *CBCE4_Q2_output;
@property (retain, nonatomic) MLMultiArray *CBCE4_Q3_output;
@property (retain, nonatomic) MLMultiArray *CBCE4_Q4_output;
@property (retain, nonatomic) MLMultiArray *strength_output;
@property (retain, nonatomic) MLMultiArray *uncertainty;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithCBCE4_Q0_output:(id)a0 CBCE4_Q1_output:(id)a1 CBCE4_Q2_output:(id)a2 CBCE4_Q3_output:(id)a3 CBCE4_Q4_output:(id)a4 strength_output:(id)a5 uncertainty:(id)a6;

@end
