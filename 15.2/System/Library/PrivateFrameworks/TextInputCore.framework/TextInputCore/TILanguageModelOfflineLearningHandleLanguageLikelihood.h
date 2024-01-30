@interface TILanguageModelOfflineLearningHandleLanguageLikelihood : TILanguageModelOfflineLearningHandle

- (void)load;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)a0;
- (void)adaptToParagraph:(id)a0 timeStamp:(double)a1 adaptationType:(int)a2;

@end
