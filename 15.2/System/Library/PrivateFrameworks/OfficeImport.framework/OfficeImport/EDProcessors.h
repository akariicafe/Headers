@class NSMutableArray, EDWorkbook;

@interface EDProcessors : NSObject {
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}

- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)markObject:(id)a0 processor:(Class)a1;
- (id)initWithWorkbook:(id)a0;
- (void)addProcessorClass:(Class)a0;
- (BOOL)hasProcessors;
- (void)removeProcessorClass:(Class)a0;
- (void)applyProcessorsWithSheet:(id)a0;

@end
