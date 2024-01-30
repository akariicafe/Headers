@interface CRLocaleBasedTextFeatureSplitter : CRMultiModelTextFeatureSplitter

- (void)enumerateTextFeatures:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0;
- (id)_preferredLocaleFromScriptLocales:(id)a0;
- (id)preferredLocales;
- (id)_scriptCategoryLocaleMappingForScriptCategoryRevision:(unsigned long long)a0;

@end
