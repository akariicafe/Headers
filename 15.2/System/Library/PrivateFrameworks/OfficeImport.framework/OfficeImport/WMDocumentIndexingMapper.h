@class WDDocument;

@interface WMDocumentIndexingMapper : CMIndexingMapper

@property (readonly) WDDocument *document;

- (void)mapWithState:(id)a0;
- (void)_indexText:(id)a0 intoString:(id)a1;
- (void)_indexBlock:(id)a0 intoString:(id)a1;
- (void)_indexTable:(id)a0 intoString:(id)a1;

@end
