@class _PASLock;

@interface PPBaseScoreInputSet : NSObject {
    _PASLock *_scalarMap;
    _PASLock *_arrayMap;
    _PASLock *_objectMap;
}

+ (id /* block */)coreMLModelPathBlock;

- (unsigned long long)undefinedObjectScoreIndex;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)minScalarScoreIndex;
- (unsigned long long)objectScoreIndexUpperBound;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)arrayScoreIndexUpperBound;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (unsigned long long)indexForScalarScoreName:(id)a0;
- (unsigned long long)indexForArrayScoreName:(id)a0;
- (unsigned long long)indexForObjectScoreName:(id)a0;

@end
