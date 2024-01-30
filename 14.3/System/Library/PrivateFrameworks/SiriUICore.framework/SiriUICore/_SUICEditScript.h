@class NSArray, NSMutableArray, _SUICIntArray2D;
@protocol _SUICEditScriptData;

@interface _SUICEditScript : NSObject {
    BOOL _orderAtomsAscending;
    _SUICIntArray2D *_distanceMatrix;
    long long _currentOperation;
    id<_SUICEditScriptData> _itemAData;
    id<_SUICEditScriptData> _itemBData;
}

@property (copy, nonatomic) NSArray *operationPrecedenceArray;
@property (retain, nonatomic) NSMutableArray *script;

- (void)addToCurrentScriptAtomEditOperation:(long long)a0 editIndex:(unsigned long long)a1 newText:(id)a2 indexInArrayB:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)description;
- (id)operationPrecedenceArrayFromOperationPrecedence:(long long)a0;
- (void)initializeCurrentScriptAtom;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)a0 orderAtomsAscending:(BOOL)a1;
- (void)computeDistanceMatrix;
- (void)computeEditsFromMatrix;

@end
