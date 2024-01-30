@interface PPLocationAggScoreInputSet : PPBaseScoreInputSet

- (unsigned long long)minScalarScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)minObjectScoreIndex;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)objectScoreIndexUpperBound;

@end
