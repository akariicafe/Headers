@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel *__ptr_; struct __shared_weak_count *__cntrl_; } currentModel;
@property (readonly, nonatomic) struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer *m_ptr; } dictionaries;

- (void)load;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithInputMode:(id)a0;
- (void)adaptToParagraph:(id)a0 timeStamp:(double)a1 adaptationType:(int)a2;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)a0;

@end
