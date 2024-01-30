@interface LighthouseCoreMLModelTraining : NSObject

+ (void)initialize;
+ (id)evaluateModel:(id)a0 modelConfiguration:(id)a1 dataBatch:(id)a2;
+ (BOOL)trainModel:(id)a0 destModelUrl:(id)a1 modelConfiguration:(id)a2 dataBatch:(id)a3;

@end
