@interface COMutableBallot : COBallot

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCandidate:(id)a0;
- (BOOL)addDiscoveryRecord:(id)a0;
- (void)mergeBallot:(id)a0;
- (void)removeCandidate:(id)a0;

@end
