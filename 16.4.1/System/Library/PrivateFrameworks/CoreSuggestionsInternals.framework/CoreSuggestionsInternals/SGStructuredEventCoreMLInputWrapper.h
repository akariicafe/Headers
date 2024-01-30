@class MLMultiArray, NSSet;

@interface SGStructuredEventCoreMLInputWrapper : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *L;
@property (retain, nonatomic) MLMultiArray *D;
@property (retain, nonatomic) MLMultiArray *I;
@property (retain, nonatomic) MLMultiArray *N;
@property (retain, nonatomic) MLMultiArray *W;
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_h_in;
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_c_in;
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_h_in_rev;
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_c_in_rev;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithL:(id)a0 D:(id)a1 I:(id)a2 N:(id)a3 W:(id)a4;
- (id)initWithL:(id)a0 D:(id)a1 I:(id)a2 N:(id)a3 W:(id)a4 bi_lstm_0_h_in:(id)a5 bi_lstm_0_c_in:(id)a6 bi_lstm_0_h_in_rev:(id)a7 bi_lstm_0_c_in_rev:(id)a8;

@end
