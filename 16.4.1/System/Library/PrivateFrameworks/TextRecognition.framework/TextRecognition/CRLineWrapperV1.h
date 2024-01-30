@interface CRLineWrapperV1 : NSObject <CRLineWrapping>

- (id)_allLineFeatures:(id)a0 blockMapping:(id *)a1;
- (BOOL)_shouldInsertLineBreakForResult:(id)a0 configuration:(id)a1 context:(id)a2;
- (void)computeLineWrappingForFeatures:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)lineWrappingTypeForResult:(id)a0 configuration:(id)a1 strictConfiguration:(id)a2 context:(id)a3;

@end
