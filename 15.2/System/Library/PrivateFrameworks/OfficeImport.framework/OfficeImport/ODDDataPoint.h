@class NSMutableArray;

@interface ODDDataPoint : ODDPoint {
    NSMutableArray *mPresentations;
}

- (void).cxx_destruct;
- (id)presentations;
- (void)addPresentation:(id)a0 order:(unsigned long long)a1;
- (void)addAssociatedPresentation:(id)a0;

@end
