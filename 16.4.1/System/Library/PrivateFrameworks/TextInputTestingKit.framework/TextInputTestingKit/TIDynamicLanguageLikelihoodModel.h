@class NSLinguisticTagger, NSString;

@interface TIDynamicLanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling> {
    struct map<std::string, long, std::less<std::string>, std::allocator<std::pair<const std::string, long>>> { struct __tree<std::__value_type<std::string, long>, std::__map_value_compare<std::string, std::__value_type<std::string, long>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } m_counts_for_language;
    long long m_total_counts;
}

@property (readonly, nonatomic) NSLinguisticTagger *linguisticTagger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)emojiUsageCountForApp:(id)a0 lastEmojiCountUpdateTime:(double *)a1;
- (id).cxx_construct;
- (id)rankedLanguagesForRecipient:(id)a0;
- (id)init;
- (void)addEvidence:(id)a0 timestamp:(double)a1 adaptationType:(int)a2 forRecipient:(id)a3 app:(id)a4 language:(id)a5;
- (double)lastOfflineAdaptationTimeForApp:(id)a0;
- (void)priorProbabilityForLanguages:(id)a0 recipient:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (float)_priorProbabilityForLanguage:(const void *)a0;
- (void)addEvidence:(id)a0 forRecipient:(id)a1 language:(id)a2;

@end
