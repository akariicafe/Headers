@interface CRCtcTimeSample : NSObject

@property struct CRCTCPriorityQueue { struct priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >, CRCTCPriorityQueue::QueueComparison> { struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate *x0; struct CRCtcCandidate *x1; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate *x0; } x2; } x0; struct QueueComparison { } x1; } x0; BOOL x1; struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate *x0; struct CRCtcCandidate *x1; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate *x0; } x2; } x2; } *sample;
@property struct CRCtcCandidate { int symbol; float prob; } blank;

- (id)init;
- (void)dealloc;
- (void)addCandidate:(struct CRCtcCandidate { int x0; float x1; })a0;
- (const struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate *x0; struct CRCtcCandidate *x1; struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> > { struct CRCtcCandidate *x0; } x2; } *)candidates;
- (void)trimCandidates;
- (struct CRCtcCandidate { int x0; float x1; })topCandidate;

@end
