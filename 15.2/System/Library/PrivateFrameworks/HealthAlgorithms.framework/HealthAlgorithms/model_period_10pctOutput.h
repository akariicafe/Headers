@class MLMultiArray, NSSet;

@interface model_period_10pctOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *out_;
@property (retain, nonatomic) MLMultiArray *lstm_1_h_out;
@property (retain, nonatomic) MLMultiArray *lstm_1_c_out;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithOut:(id)a0 lstm_1_h_out:(id)a1 lstm_1_c_out:(id)a2;

@end
