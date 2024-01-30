@class NSMutableArray;

@interface TSCECellValueCombinator : NSObject {
    NSMutableArray *_valuesForDimension;
}

- (void).cxx_destruct;
- (void)addValuesForDimension:(id)a0;
- (void)enumerateCombinationsWithBlock:(id /* block */)a0;

@end
