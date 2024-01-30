@class PDPresentation;

@interface PMPresentationIndexingMapper : CMIndexingMapper

@property (readonly) PDPresentation *document;

- (void)_indexDrawable:(id)a0 intoString:(id)a1;
- (void)_indexSlide:(id)a0 intoString:(id)a1;
- (void)_indexTable:(id)a0 intoString:(id)a1;
- (void)_indexTextBody:(id)a0 intoString:(id)a1;
- (void)mapElement:(id)a0 atIndex:(unsigned long long)a1 withState:(id)a2 isLastElement:(BOOL)a3;
- (void)mapWithState:(id)a0;

@end
