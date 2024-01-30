@class _PASLock;

@interface PPBaseScoreInputSet : NSObject {
    _PASLock *_scalarMap;
    _PASLock *_arrayMap;
    _PASLock *_objectMap;
}

- (unsigned long long)objectScoreIndexUpperBound;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;
- (id)init;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (unsigned long long)minScalarScoreIndex;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)indexForArrayScoreName:(id)a0;
- (unsigned long long)indexForObjectScoreName:(id)a0;
- (unsigned long long)indexForScalarScoreName:(id)a0;

@end
