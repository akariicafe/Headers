@interface SGQuickResponsesClassificationModel : SGQuickResponsesModel

+ (id)newTransformerInstanceForLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2;
+ (id)newTransformerInstanceForLanguage:(id)a0 withDictionary:(id)a1 withSeed:(unsigned long long)a2 forMode:(unsigned long long)a3;
+ (id)featurizerWithMethods:(id)a0 bucketSize:(unsigned long long)a1 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
+ (id)newTransformerInstanceForConfig:(id)a0 seed:(unsigned long long)a1 useSeed:(BOOL)a2;

@end
