@interface PPTopicAggScoreInputSet : PPBaseScoreInputSet

- (unsigned long long)objectScoreIndexUpperBound;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (unsigned long long)minScalarScoreIndex;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (unsigned long long)arrayScoreIndexUpperBound;

@end
