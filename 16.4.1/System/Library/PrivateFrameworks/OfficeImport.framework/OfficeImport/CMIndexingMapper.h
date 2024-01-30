@interface CMIndexingMapper : CMDocumentMapper

- (void)finishMappingWithState:(id)a0;
- (void)mapElement:(id)a0 atIndex:(unsigned long long)a1 withState:(id)a2 isLastElement:(BOOL)a3;
- (void)mapSummaryWithState:(id)a0;
- (void)mapWithState:(id)a0;
- (void)startMappingWithState:(id)a0;

@end
