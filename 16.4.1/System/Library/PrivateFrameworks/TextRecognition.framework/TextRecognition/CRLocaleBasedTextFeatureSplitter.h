@interface CRLocaleBasedTextFeatureSplitter : CRMultiModelTextFeatureSplitter

- (id)initWithConfiguration:(id)a0;
- (id)preferredLocales;
- (id)_preferredLocaleFromScriptLocales:(id)a0;
- (id)_scriptCategoryLocaleMappingForScriptCategoryRevision:(unsigned long long)a0;
- (void)enumerateTextFeatures:(id)a0 usingBlock:(id /* block */)a1;
- (void)preferredLocaleBasedScriptVoting:(id)a0;

@end
