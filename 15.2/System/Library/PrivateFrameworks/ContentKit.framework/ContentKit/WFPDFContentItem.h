@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (void)initialize;
+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (void)getPDFFromPrintFormatters:(id)a0 nameIfKnown:(id)a1 matchingInputSize:(BOOL)a2 withMargin:(BOOL)a3 startingAtPage:(long long)a4 endingAtPage:(long long)a5 completionHandler:(id /* block */)a6;
+ (id)itemWithPrintFormatters:(id)a0 names:(id)a1;

- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getPDF:(id /* block */)a0 matchingInputSize:(BOOL)a1 withMargin:(BOOL)a2 startingAtPage:(long long)a3 endingAtPage:(long long)a4;
- (void)createImageWithFileType:(id)a0 colorspace:(struct CGColorSpace { } *)a1 resolution:(double)a2 completion:(id /* block */)a3;
- (void)enumeratePagesInDocument:(id)a0 block:(id /* block */)a1;

@end
