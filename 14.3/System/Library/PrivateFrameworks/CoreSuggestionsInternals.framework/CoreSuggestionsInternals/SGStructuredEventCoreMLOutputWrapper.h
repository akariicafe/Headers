@class MLMultiArray, NSSet;

@interface SGStructuredEventCoreMLOutputWrapper : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *location;
@property (retain, nonatomic) MLMultiArray *time;
@property (retain, nonatomic) MLMultiArray *title;
@property (retain, nonatomic) MLMultiArray *core;
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_h_out;
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_c_out;
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_h_out_rev;
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_c_out_rev;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 time:(id)a1 title:(id)a2 core:(id)a3 bi_lstm_0_h_out:(id)a4 bi_lstm_0_c_out:(id)a5 bi_lstm_0_h_out_rev:(id)a6 bi_lstm_0_c_out_rev:(id)a7;

@end
