@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel *__ptr_; struct __shared_weak_count *__cntrl_; } currentModel;
@property (readonly, nonatomic) struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer *m_ptr; } dictionaries;

- (id)initWithInputMode:(id)a0;
- (void).cxx_destruct;
- (void)load;
- (id).cxx_construct;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)a0;
- (void)adaptToParagraph:(id)a0 timeStamp:(double)a1 adaptationType:(int)a2;

@end
