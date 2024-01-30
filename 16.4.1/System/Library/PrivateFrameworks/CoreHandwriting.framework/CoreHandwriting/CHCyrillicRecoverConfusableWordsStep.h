@interface CHCyrillicRecoverConfusableWordsStep : CHPostprocessingStep

- (void)checkCharactersInString:(id)a0 outHasLatin:(BOOL *)a1 outHasCyrillic:(BOOL *)a2;
- (void)checkCharactersInTokenRow:(id)a0 outHasLatin:(BOOL *)a1 outHasCyrillic:(BOOL *)a2;
- (id)process:(id)a0 options:(id)a1;

@end
