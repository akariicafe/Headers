@class EDWorkbook;

@interface EMWorkbookIndexingMapper : CMIndexingMapper

@property (readonly) EDWorkbook *document;

- (void)setElementCount:(unsigned long long)a0;
- (void)finishMappingWithState:(id)a0;
- (void)mapElement:(id)a0 atIndex:(unsigned long long)a1 withState:(id)a2 isLastElement:(BOOL)a3;

@end
