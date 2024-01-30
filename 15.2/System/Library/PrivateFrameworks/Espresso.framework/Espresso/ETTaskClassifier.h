@class NSArray;

@interface ETTaskClassifier : ETTask

@property NSArray *class_names;

- (id)initWithModelDef:(id)a0 optimizerDef:(id)a1 extractor:(id)a2;
- (id)initWithModelDef:(id)a0 optimizerDef:(id)a1 extractor:(id)a2 needWeightsInitialization:(BOOL)a3;

@end
