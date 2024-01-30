@class TIWordSearch;

@interface TILanguageModelOfflineLearningHandleMecabra : TILanguageModelOfflineLearningHandle

@property (retain, nonatomic) TIWordSearch *wordSearch;

- (void)load;
- (void).cxx_destruct;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)a0;
- (void)adaptToParagraph:(id)a0 timeStamp:(double)a1 adaptationType:(int)a2;

@end
