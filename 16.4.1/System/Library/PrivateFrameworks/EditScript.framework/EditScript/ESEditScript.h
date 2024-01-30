@class NSArray, NSMutableArray, ESIntArray2D;
@protocol ESEditScriptData;

@interface ESEditScript : NSObject {
    BOOL _orderAtomsAscending;
    ESIntArray2D *_distanceMatrix;
    long long _currentOperation;
    id<ESEditScriptData> _itemAData;
    id<ESEditScriptData> _itemBData;
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
