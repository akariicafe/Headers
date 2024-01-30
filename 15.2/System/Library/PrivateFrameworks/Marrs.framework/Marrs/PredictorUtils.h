@interface PredictorUtils : NSObject

+ (long long)handleInitException:(struct exception_ptr { void *x0; })a0;
+ (long long)handlePredictException:(struct exception_ptr { void *x0; })a0;
+ (void)reportInitStatusWithPredictorName:(id)a0 code:(long long)a1 locale:(id)a2;
+ (void)reportPredictStatusWithPredictorName:(id)a0 code:(long long)a1 locale:(id)a2;
+ (id)getInitStatusWithPredictorName:(id)a0 code:(long long)a1;
+ (id)getPredictStatusWithPredictorName:(id)a0 code:(long long)a1;

@end
