@interface RTInferredMapItemDeduper : NSObject

@property (readonly, copy, nonatomic) id /* block */ deduperFunction;

- (id)ingestInferredMapItem:(id)a0 state:(id)a1 error:(id *)a2;
- (id)dedupeDoubleArrayOfInferredMapItems:(id)a0 state:(id)a1 error:(id *)a2;
- (id)ingestInferredMapItems:(id)a0 state:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)inferredMapItem:(id)a0 dedupesToInferredMapItem:(id)a1 error:(id *)a2;
- (id)init;
- (id)dedupeInferredMapItems:(id)a0 error:(id *)a1;
- (id)initWithDeduperFunction:(id /* block */)a0;
- (id)dedupeDoubleArrayOfInferredMapItems:(id)a0 error:(id *)a1;
- (id)dedupeInferredMapItems:(id)a0 state:(id)a1 error:(id *)a2;

@end
