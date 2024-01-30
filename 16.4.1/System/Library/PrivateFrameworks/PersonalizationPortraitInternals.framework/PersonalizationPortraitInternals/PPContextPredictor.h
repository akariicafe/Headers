@class MLModel, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PPContextPredictor : NSObject {
    MLModel *_mlModel;
    NSString *_language;
    NSObject<OS_dispatch_queue> *_coremlQueue;
}

- (id)contextForSentence:(id)a0;
- (id)initWithMLModel:(id)a0 language:(id)a1;
- (id)initWithLanguage:(id)a0;
- (void).cxx_destruct;

@end
