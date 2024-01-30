@interface PPCombinedScoreInputSet : PPBaseScoreInputSet

- (unsigned long long)undefinedObjectScoreIndex;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
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

@end
