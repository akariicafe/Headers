@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (void)initialize;
+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemWithPrintFormatters:(id)a0 names:(id)a1;

- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getPDF:(id /* block */)a0 matchingInputSize:(BOOL)a1 withMargin:(BOOL)a2 startingAtPage:(long long)a3 endingAtPage:(long long)a4;
- (void)getPageTextsWithPDFKit:(id /* block */)a0;
- (void)getPageTextsWithCompletionHandler:(id /* block */)a0;

@end
