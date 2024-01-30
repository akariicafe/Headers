@class Te_tjejjxf8q3Input, Te_c3seuakuh8Output, MLMultiArray, Te_tjejjxf8q3, Te_c3seuakuh8Input, Te_c3seuakuh8, Te_tjejjxf8q3Output, MLPredictionOptions;

@interface Predictor : NSObject

@property (readonly, nonatomic) MLMultiArray *TeModelInput;
@property (readonly, nonatomic) Te_c3seuakuh8 *mTe_c3seuakuh8;
@property (readonly, nonatomic) Te_tjejjxf8q3 *mTe_tjejjxf8q3;
@property (readonly, nonatomic) Te_c3seuakuh8Output *TeModelOutput_c3seuakuh8;
@property (readonly, nonatomic) Te_tjejjxf8q3Output *TeModelOutput_tjejjxf8q3;
@property (readonly, nonatomic) Te_c3seuakuh8Input *TeModelInput_c3seuakuh8;
@property (readonly, nonatomic) Te_tjejjxf8q3Input *TeModelInput_tjejjxf8q3;
@property (readonly, nonatomic) MLPredictionOptions *modelOptions;

- (id)init;
- (void).cxx_destruct;
- (BOOL)predict:(void *)a0 afib:(void *)a1 be_mode:(BOOL *)a2 with_error_status:(BOOL *)a3;
- (void)resample:(void *)a0 output:(void *)a1;

@end
