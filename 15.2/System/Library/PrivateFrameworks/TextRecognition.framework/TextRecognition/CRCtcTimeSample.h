@interface CRCtcTimeSample : NSObject

@property void *sample;
@property struct CRCtcCandidate { int symbol; float prob; } blank;

- (const void *)candidates;
- (id)init;
- (void)dealloc;
- (void)addCandidate:(struct CRCtcCandidate { int x0; float x1; })a0;
- (void)trimCandidates;
- (struct CRCtcCandidate { int x0; float x1; })topCandidate;

@end
