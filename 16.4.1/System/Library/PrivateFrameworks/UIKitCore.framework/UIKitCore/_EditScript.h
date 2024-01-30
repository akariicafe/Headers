@class NSArray, NSMutableArray, _IntArray2D;
@protocol _EditScriptData;

@interface _EditScript : NSObject {
    BOOL _orderAtomsAscending;
    _IntArray2D *_distanceMatrix;
    long long _currentOperation;
    id<_EditScriptData> _itemAData;
    id<_EditScriptData> _itemBData;
}

@property (copy, nonatomic) NSArray *operationPrecedenceArray;
@property (retain, nonatomic) NSMutableArray *script;

- (id)description;
- (void).cxx_destruct;
- (void)addToCurrentScriptAtomEditOperation:(long long)a0 editIndex:(unsigned long long)a1 newText:(id)a2 indexInArrayB:(unsigned long long)a3;
- (void)computeDistanceMatrix;
- (void)computeEditsFromMatrix;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)a0 orderAtomsAscending:(BOOL)a1;
- (void)initializeCurrentScriptAtom;
- (id)operationPrecedenceArrayFromOperationPrecedence:(long long)a0;

@end
