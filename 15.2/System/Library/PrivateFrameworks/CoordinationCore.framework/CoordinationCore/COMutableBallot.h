@interface COMutableBallot : COBallot

- (void)removeCandidate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeBallot:(id)a0;
- (void)addCandidate:(id)a0;

@end
